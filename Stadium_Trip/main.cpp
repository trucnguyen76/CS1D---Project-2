#include "mainwindow.h"
#include <QApplication>
#include <qsql.h>
#include <qsqldatabase.h>
#include <qdebug.h>
#include <qsqlquery.h>
#include <QSqlError>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


//    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
//    db.setDatabaseName("test");

//    bool ok = db.open();

//    if(ok)
//    {
//        qDebug() << "open";
//        QSqlQuery qry;


//        if(qry.exec("SELECT * FROM [dbo].[test]"))
//        {
//            while(qry.next())
//            {
//                qDebug() << qry.value(1).toString();
//            }
//        }
//        else
//        {
//            qDebug() << "ERRor = " << db.lastError().text();
//        }
//        qDebug() << "closing";
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
