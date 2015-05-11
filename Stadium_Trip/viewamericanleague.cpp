#include "mainwindow.h"

void MainWindow::on_viewAmericanLeagueBtn_clicked()
{
    int index;
    int row;
    int size = 0;
    QTableWidgetItem*   tableItem;
    QStringList         horizontalHeaderList;
    QStringList         verticalHeaderList;

    //Set the headers for each column
    horizontalHeaderList.append("Stadium Name");
    horizontalHeaderList.append("Team Name");
    horizontalHeaderList.append("Address");
    horizontalHeaderList.append("Phone Number");
    horizontalHeaderList.append("Date Opened");
    horizontalHeaderList.append("Seating Capacity");

    //The header for each row will be empty

    foreach(Stadium stadium, stadiumMap)
    {
        if(stadium.getLeague() == 'A')
            size ++;
    }
    for(index = 0; index < size; index++)
    {
        verticalHeaderList.append("");
    }

    ui->viewAmericanLeagueTable->setColumnCount(6);
    ui->viewAmericanLeagueTable->setRowCount(size);
    ui->viewAmericanLeagueTable->setHorizontalHeaderLabels(horizontalHeaderList);
    ui->viewAmericanLeagueTable->setVerticalHeaderLabels(verticalHeaderList);

    //Set column width for columns
    ui->viewAmericanLeagueTable->setColumnWidth(0, 180);
    ui->viewAmericanLeagueTable->setColumnWidth(1, 200);
    ui->viewAmericanLeagueTable->setColumnWidth(2, 280);
    ui->viewAmericanLeagueTable->setColumnWidth(3, 120);
    ui->viewAmericanLeagueTable->setColumnWidth(4, 120);
    ui->viewAmericanLeagueTable->setColumnWidth(5, 250);

    //Set the # of rows for the table
    row = 0;
    foreach(Stadium stadium, stadiumMap)
    {
        if(stadium.getLeague() == 'A')
        {
            //Show stadium name
            //Dynamically create a "cell" of the table
            tableItem = new QTableWidgetItem();
            //Set stadium name to the tableItem
            tableItem->setText(stadium.getStadiumName());
            //Place the tableItem in the desired location in the table
            ui->viewAmericanLeagueTable->setItem(row, 0, tableItem);

            //Show team name
            tableItem = new QTableWidgetItem();
            tableItem->setText(stadium.getTeamName());
            ui->viewAmericanLeagueTable->setItem(row, 1, tableItem);

            //Show Street Address
            tableItem = new QTableWidgetItem();
            tableItem->setText(stadium.getAddress());
            ui->viewAmericanLeagueTable->setItem(row, 2, tableItem);

            //Show Phone Number
            tableItem = new QTableWidgetItem();
            tableItem->setText(stadium.getPhoneNumber());
            ui->viewAmericanLeagueTable->setItem(row, 3, tableItem);

            //Show DateOpened
            tableItem = new QTableWidgetItem();
            tableItem->setText(stadium.getDateOpened().toString());
            ui->viewAmericanLeagueTable->setItem(row, 4, tableItem);

            //Show Seating Capacity
            tableItem = new QTableWidgetItem();
            tableItem->setText(stadium.getCapacity());
            ui->viewAmericanLeagueTable->setItem(row, 5, tableItem);

            row++;

        }
    }

    ui->viewAmericanLeagueTable->sortByColumn(1, Qt::AscendingOrder);

    ui->viewAMLeaguePage->show();
    ui->viewStadiumsPage->hide();
}

void MainWindow::on_pushButton_13_clicked()
{
    ui->viewAMLeaguePage->hide();
    ui->viewStadiumsPage->show();
}
