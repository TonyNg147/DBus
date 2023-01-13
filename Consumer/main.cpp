#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QGuiApplication>
#include "consumer.h"
int main(int argc, char* argv[]){
    QGuiApplication app(argc,argv);
    Consumer *consumer = new Consumer();
    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("consumer",consumer);;
    engine.load(QUrl("qrc:/main.qml"));
    return app.exec();
}
