#include "mainwindow.h"

void MainWindow::on_viewMajorLeagueBtn_clicked()
{
    int index;
    int row;
//    int column;
    QTableWidgetItem*   tableItem;
    QStringList         horizontalHeaderList;
    QStringList         verticalHeaderList;
//    QString             longestHeader;

    //Set the headers for each column
    horizontalHeaderList.append("Stadium Name");
    horizontalHeaderList.append("Team Name");
    horizontalHeaderList.append("American or National League");
    horizontalHeaderList.append("Address");
    horizontalHeaderList.append("Phone Number");
    horizontalHeaderList.append("Date Opened");
    horizontalHeaderList.append("Seating Capacity");

    //The header for each row will be empty
    for(index = 0; index < stadiumMap.size(); index++)
    {
        verticalHeaderList.append("");
    }

    ui->viewMajorLeagueTable->setColumnCount(7);
    ui->viewMajorLeagueTable->setRowCount(stadiumMap.size());
    ui->viewMajorLeagueTable->setHorizontalHeaderLabels(horizontalHeaderList);
    ui->viewMajorLeagueTable->setVerticalHeaderLabels(verticalHeaderList);

//    longestHeader = "American or National League";

//    //For loop - Set column width
//    for(column = 0; column < 7; column++)
//    {
//        ui->viewMajorLeagueTable->setColumnWidth(column, longestHeader.size() * 6.5);
//    }

    //Set column width for columns
    ui->viewMajorLeagueTable->setColumnWidth(0, 180);
    ui->viewMajorLeagueTable->setColumnWidth(1, 200);
    ui->viewMajorLeagueTable->setColumnWidth(2, 180);
    ui->viewMajorLeagueTable->setColumnWidth(3, 280);
    ui->viewMajorLeagueTable->setColumnWidth(4, 120);
    ui->viewMajorLeagueTable->setColumnWidth(5, 120);
    ui->viewMajorLeagueTable->setColumnWidth(6, 250);

    //Set the # of rows for the table
    row = 0;
    foreach(Stadium stadium, stadiumMap)
    {
        //Show stadium name
        //Dynamically create a "cell" of the table
        tableItem = new QTableWidgetItem();
        //Set stadium name to the tableItem
        tableItem->setText(stadium.getStadiumName());
        //Place the tableItem in the desired location in the table
        ui->viewMajorLeagueTable->setItem(row, 0, tableItem);

        //Show team name
        tableItem = new QTableWidgetItem();
        tableItem->setText(stadium.getTeamName());
        ui->viewMajorLeagueTable->setItem(row, 1, tableItem);

        //Show National/American League
        tableItem = new QTableWidgetItem();
        tableItem->setText(stadium.getLeague() == 'A'? "American League": "National League");
        ui->viewMajorLeagueTable->setItem(row, 2, tableItem);

        //Show Street Address
        tableItem = new QTableWidgetItem();
        tableItem->setText(stadium.getAddress());
        ui->viewMajorLeagueTable->setItem(row, 3, tableItem);

        //Show Phone Number
        tableItem = new QTableWidgetItem();
        tableItem->setText(stadium.getPhoneNumber());
        ui->viewMajorLeagueTable->setItem(row, 4, tableItem);

        //Show DateOpened
        tableItem = new QTableWidgetItem();
        tableItem->setText(stadium.getDateOpened().toString());
        ui->viewMajorLeagueTable->setItem(row, 5, tableItem);

        //Show Seating Capacity
        tableItem = new QTableWidgetItem();
        tableItem->setText(stadium.getCapacity());
        ui->viewMajorLeagueTable->setItem(row, 6, tableItem);

        row++;
    }

    ui->viewMajorLeaguePage->show();
    ui->viewStadiumsPage->hide();
}

void MainWindow::on_pushButton_11_clicked()
{
    ui->viewMajorLeaguePage->hide();
    ui->viewStadiumsPage->show();
}
