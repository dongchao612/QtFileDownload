#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("文件下载器：客户端");
    this->setMaximumSize(WIDTH, HEIGHT);
    this->setMinimumSize(WIDTH, HEIGHT);
    this->m_baseDir = "LocalFiles";



    init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init()
{
    QDir dir(m_baseDir);

    //创建保存文件路径
    if(!dir.exists())
    {
        dir.mkpath(m_baseDir);
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
    ui->ButtonDisconnect->setEnabled(false);
}


void MainWindow::on_ButtonConnect_clicked()
{
    m_socket = new QTcpSocket();
    // 获取服务器IP
    m_localIP = ui->ComboBoxIP->currentText();
    // 获取服务器端口
    m_port = ui->LineEditPort->text().toUShort();


    //连接服务器
    // 成功 发送信号  connect
    // 失败 发送信号  error
    m_socket->connectToHost(QHostAddress(m_localIP), m_port);
    connect(m_socket, SIGNAL(connected()), this, SLOT(onConnect()));

}
void MainWindow::onConnect()
{
    qDebug() << __FUNCTION__;
}
