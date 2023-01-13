#ifndef CONSUMER_H
#define CONSUMER_H

#include <QObject>
#include <controller_interface.h>
class Consumer : public QObject
{
    Q_OBJECT
public:
    explicit Consumer(QObject *parent = nullptr);
public slots:
    void changeStatus(bool);
signals:
private:
    nguyen::pro::service *m_serivce = nullptr;
};

#endif // CONSUMER_H
