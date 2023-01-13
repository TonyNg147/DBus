#include "controller.h"

Controller::Controller(QObject *parent)
    : QObject{parent}
{

}

bool Controller::status() const
{
    return m_status;
}

void Controller::setStatus(bool newStatus)
{
    if (m_status == newStatus)
        return;
    m_status = newStatus;
    emit statusChanged();
}
