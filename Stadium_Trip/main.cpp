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




    MainWindow w;
    w.show();

    return a.exec();
}
