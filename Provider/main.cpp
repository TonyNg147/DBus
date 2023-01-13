#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <controller.h>
#include <controller_adaptor.h>
#include <QDBusConnection>
int main(int argc, char* argv[]){
    QGuiApplication app(argc,argv);
    QQmlApplicationEngine engine;

    Controller *controller = new Controller();
    new ServiceAdaptor(controller);
    QDBusConnection::sessionBus().registerObject("/Service",controller);
    QDBusConnection::sessionBus().registerService("nguyen.pro.service");
    engine.rootContext()->setContextProperty("controller",controller);
    engine.load(QUrl("qrc:/main.qml"));
    return app.exec();
}
