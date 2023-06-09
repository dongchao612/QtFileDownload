﻿#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>
#include <QFile>
#include <QDebug>
#include <QString>
#include <QListWidgetItem>
#include <QHostInfo>
#include <QList>

#include "sockethandle.h"
#include <QTcpServer>
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
    QList<QString> getFileList(QString dir);

private slots:

    void on_ButtonAddfile_clicked();

    void on_ButtonDelfile_clicked();

    void on_ButtonRun_clicked();

    void on_ButtonStop_clicked();

    void on_ComboBoxIP_currentTextChanged(const QString& arg1);

private:
    Ui::MainWindow* ui;
    QString m_baseDir;      //存储文件的基地址
    QString m_localIP;      //IP地址
    int m_port;             //端口号

    QTcpServer* m_server;   //监听套接字
    QTcpSocket* m_socket;   //通信套接字
    int m_socket_count = 0;

    QList<QString> entry ;

    SocketHandle* m_SocketHandle;
    void Init();
};
#endif // MAINWINDOW_H
