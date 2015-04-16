#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


//    QString serverName = "LOCALHOST\\SQLEXPRESS";
//    QString dbName = "test";
//    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

//    db.setConnectOptions();
//    QString dsn = QString("DRIVER ={SQL Native Client}; SERVER=%1;DATABASE=%2;UID=Bigman-PC\\Bigman;PWD=;").arg(serverName).arg(dbName);

//    db.setDatabaseName(dsn);

//    if(db.open())
//    {
//        qDebug() << "open";
//        db.close();
//    }
//    else
//    {
//        qDebug() << "ERRor = " << db.lastError().text();
//    }

    MainWindow w;
    w.show();

    return a.exec();
}
