#include "mainwindow.h"
#include <QMessageBox>
#include <QDebug>

void MainWindow::loadData()
{
    Stadium*    stadiumPtr;
    int count;
    int day, month, year;
    QString line, monthStr, dayStr, yearStr, capacity, address;

    QString fileName = "inputFile.txt";
    QFile inFile(fileName);
    QTextStream in(&inFile);

    count = 0;

    if(!inFile.open(QIODevice::ReadOnly)){
        QString msg = fileName.append(" has failed to load");
        QMessageBox::information(0,"Critical Failure", msg);
    }

    while (!in.atEnd())
    {
        stadiumPtr = new Stadium;
        stadiumPtr->setStadiumName(in.readLine());
        stadiumPtr->setTeamName(in.readLine());
        address = in.readLine();
        stadiumPtr->setAddress(address + " \n" + in.readLine());
        stadiumPtr->setPhoneNumber(in.readLine());
        //Read Opened
        in >> line;
//        qDebug() << line;
        in >> line;
//        qDebug() << line;

        in >> monthStr;

//        qDebug() << "Month is: " << monthStr;


        if(monthStr == "January")
        {
            month = 1;
        }
        else if (monthStr == "February")
        {
            month = 2;
        }
        else if (monthStr == "March")
        {
            month = 3;
        }
        else if (monthStr == "April")
        {
            month = 4;
        }
        else if (monthStr == "May")
        {
            month = 5;
        }
        else if (monthStr == "June")
        {
            month = 6;
        }
        else if (monthStr == "July")
        {
            month = 7;
        }
        else if (monthStr == "August")
        {
            month = 8;
        }
        else if (monthStr == "September")
        {
            month = 9;
        }
        else if (monthStr == "October")
        {
            month = 10;
        }
        else if (monthStr == "November")
        {
            month = 11;
        }
        else if (monthStr == "December")
        {
            month = 12;
        }

        in >> dayStr;
//        qDebug() << "Day is: " << dayStr;
        day = dayStr.remove(QRegExp(",{1}")).toInt();
        in >> yearStr;
//        qDebug() << "Year is: " << yearStr;
        year = yearStr.toInt();

        stadiumPtr->setDateOpened(QDate(year, month, day));

        in.flush();
        in >> line;
//        qDebug() << line;
        in >> line;
//        qDebug() << line;
        capacity = in.readLine().remove(0, 1);
        stadiumPtr->setCapacity(capacity);

        //First 15 teams will be american league
        if(count < 15)
        {
            stadiumPtr->setLeague('A');
        }
        else
        {
            stadiumPtr->setLeague('N');
        }
//        qDebug() << stadiumPtr->displayStadium();

        stadiumMap.insert(stadiumPtr->getStadiumName(),*stadiumPtr);

        count++;

            in.readLine();
            in.readLine();
    }
    inFile.close();

    QHash<QString, Stadium>::iterator it;
    for(it = stadiumMap.begin(); it != stadiumMap.end(); it++)
    {

        if(it.value().getStadiumName() == "Tropicana Field" ||
          it.value().getStadiumName() == "Rogers Center")
        {
           it.value().setGrassField(false);
        }
        else
        {
           it.value().setGrassField(true);
        }
    }


//    (*stadiumMap.find("Tropicana Field")).setGrassField(false);
//    (*stadiumMap.find("Rogers Center")).setGrassField(false);

//    foreach (Stadium stadium, stadiumMap)
//    {
//        qDebug() << stadium.getGrassField();
//    }
}
