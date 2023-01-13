#include "consumer.h"
#include <QDBusConnection>
Consumer::Consumer(QObject *parent)
    : QObject{parent}
{
    m_serivce = new nguyen::pro::service("nguyen.pro.service","/Service",QDBusConnection::sessionBus());
}

void Consumer::changeStatus(bool status)
{
    m_serivce->setStatus(status);
}
