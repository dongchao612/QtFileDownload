#ifndef SOCKETHANDLE_H
#define SOCKETHANDLE_H

#include <QObject>
#include <QTcpSocket>
#include <QDebug>
#include <QString>

class SocketHandle : public QObject
{
    Q_OBJECT
public:
    explicit SocketHandle(QTcpSocket* socket, QObject* parent = nullptr);
    ~SocketHandle();
signals:
private slots:
    void onreadReady();
    void ondisconnected();
private:
    QTcpSocket* m_socket;
    QString m_baseDir = "./ServerFiles";
};

#endif // SOCKETHANDLE_H
