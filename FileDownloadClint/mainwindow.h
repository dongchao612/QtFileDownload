#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDir>
#include <QHostInfo>
#include <QMessageBox>
#include <QDebug>

#include <QTcpSocket>

#define     WIDTH   600
#define     HEIGHT  520

QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();




private slots:
    void on_ButtonConnect_clicked();

    void onConnect();

private:
    Ui::MainWindow* ui;
    QString m_baseDir;      //存储文件的基地址
    QString m_localIP;      //IP地址
    int m_port;             //端口号
    void init();

    QTcpSocket* m_socket;   //通信套接字

};
#endif // MAINWINDOW_H
