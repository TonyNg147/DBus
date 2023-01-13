#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>

class Controller : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool status READ status WRITE setStatus NOTIFY statusChanged)
    Q_CLASSINFO("D-Bus Interface","nguyen.pro.service")
public:
    explicit Controller(QObject *parent = nullptr);

    bool status() const;
    void setStatus(bool newStatus);

signals:

    void statusChanged();
private:
    bool m_status{false};
};

#endif // CONTROLLER_H
