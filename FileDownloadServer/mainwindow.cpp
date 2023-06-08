#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // 设置程序尺寸

    this->setWindowTitle("文件下载器：服务器");
    this->setMaximumSize(WIDTH, HEIGHT);
    this->setMinimumSize(WIDTH, HEIGHT);

    this->m_baseDir = "./ServerFiles";

    Init();
}


MainWindow::~MainWindow()
{
    delete ui;
}

inline void print(int n)
{
    qDebug() << "当前客户端的个数为:" << n << endl;
}

//初始化
void MainWindow::Init()
{
    QDir dir(m_baseDir);

    //创建保存文件路径
    if(!dir.exists())
    {
        dir.mkpath(m_baseDir);
    }

    QDir  base_dir(m_baseDir);
    QStringList entry = base_dir.entryList(QDir::Files); //去除 . ..文件夹

    for (int i = 0; i < entry.length() ; i++)
    {
        ui->listWidgetFiles->addItem(entry[i]);
    }


    QHostInfo info = QHostInfo::fromName(QHostInfo::localHostName());
    QList<QHostAddress> addrs = info.addresses();

    m_localIP = addrs[0].toString();
    for(int i = 0; i < addrs.size(); i++)
    {
        if(addrs[i].protocol() == QAbstractSocket::IPv4Protocol)
        {
            ui->ComboBoxIP->addItem(addrs[i].toString());
        }
    }

    ui->LineEditPort->setText("8080");
    ui->ButtonStop->setEnabled(false);

}



void MainWindow::on_ButtonAddfile_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, "选择添加到服务器的文件", "./");

    QFile file(filePath);

    QString fileName = file.fileName();

    // qDebug() << "filePath:" << filePath << "fileName:" << fileName << endl;

    if(!file.copy(filePath, m_baseDir + "/" + fileName.split("/").last()))
    {
        QMessageBox::warning(this, "失败", "请选择一个文件");
        return;
    }
    else if(!QFile(m_baseDir + "/" + fileName.split("/").last()).exists())
    {
        QMessageBox::warning(this, "失败", "文件已经存在，请勿重复添加");
        return;
    }

    ui->listWidgetFiles->addItem(fileName.split("/").last());
}


void MainWindow::on_ButtonDelfile_clicked()
{
    int row = ui->listWidgetFiles->currentRow();

    QDir dir(m_baseDir);
    dir.remove(ui->listWidgetFiles->currentItem()->text());

    QListWidgetItem* aItem = ui->listWidgetFiles->takeItem(row);

    delete aItem;
}


void MainWindow::on_ButtonRun_clicked()
{

    m_port = ui->LineEditPort->text().toInt();
    m_server = new QTcpServer(this);  //监听套接字
    if(m_server->listen(QHostAddress::Any, m_port) == true)
    {
        qDebug() << "创建服务器成功!\tIp地址为：" << m_localIP;
        ui->ButtonRun->setEnabled(false);
        ui->ButtonStop->setEnabled(true);
        connect(m_server, &QTcpServer::newConnection, this,  [ = ]()
        {
            m_socket = m_server->nextPendingConnection();//建立TCP连接
            qDebug() << "上线了一个客户端" << endl;
            print(++m_socket_count);
            connect(m_socket, SIGNAL(connected()), this, SLOT(onConnected()));
            connect(m_socket, SIGNAL(disconnected()), this, SLOT(onDisconnect()));
            connect(m_socket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
            connect(m_socket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(onError()));
        });
    }
}


void MainWindow::on_ButtonStop_clicked()
{
    qDebug() << "关闭服务器成功!";
    m_server->close();
    ui->ButtonRun->setEnabled(true);
    ui->ButtonStop->setEnabled(false);
}


void MainWindow::on_ComboBoxIP_currentTextChanged(const QString& arg1)
{
    m_localIP = arg1;
}

void MainWindow::onConnected()
{

}


void MainWindow::onDisconnect()
{
    m_socket->deleteLater();
    print(--m_socket_count);;
    qDebug() << "客户端断开连接..." << endl;
}

void MainWindow::onReadyRead()
{
    if(m_socket->bytesAvailable())
    {
        // 接收消息
        QByteArray buf = m_socket->readAll();
        //显示消息
        qDebug() << buf.data() << endl;
    }
}

void MainWindow::onError()
{
    QMessageBox::critical(this, "ERROR!", m_socket->errorString());
}
