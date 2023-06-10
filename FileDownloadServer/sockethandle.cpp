#include "sockethandle.h"

SocketHandle::SocketHandle(QTcpSocket* socket, QObject* parent):
    m_socket(socket),
    QObject(parent)
{
    m_socket->setParent(this);

    connect(m_socket, SIGNAL(readyRead()), this, SLOT(onreadReady()));
    connect(m_socket, SIGNAL(disconnected()), this, SLOT(ondisconnected()));
    connect(m_socket, SIGNAL(readyRead()), this, SLOT(onreadyRead()));
}

SocketHandle::~SocketHandle()
{
    m_socket->close();
}

void SocketHandle::onreadReady()
{
    qDebug() << __FUNCTION__ ;
}
void SocketHandle::ondisconnected()
{
    qDebug() << __FUNCTION__ ;
    m_socket->close();
}
