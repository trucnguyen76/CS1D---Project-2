#include "mainwindow.h"

void MainWindow::on_viewGrassSurfaceBtn_clicked()
{
    int index;
    int row;
    int size = 0;
    QTableWidgetItem*   tableItem;
    QStringList         horizontalHeaderList;
    QStringList         verticalHeaderList;
    QHash<QString, Stadium>::iterator it;

    ui->viewGrassStadiumsTable->clearContents();

    //Set the headers for each column
    horizontalHeaderList.append("Stadium Name");
    horizontalHeaderList.append("Team Name");
    horizontalHeaderList.append("American or National League");
    horizontalHeaderList.append("Address");
    horizontalHeaderList.append("Phone Number");
    horizontalHeaderList.append("Date Opened");
    horizontalHeaderList.append("Seating Capacity");

    //The header for each row will be empty

    for(it = stadiumMap.begin(); it != stadiumMap.end(); it ++)
    {
        if(it.value().getGrassField())
        {
            size ++;
        }
    }
    for(index = 0; index < size; index++)
    {
        verticalHeaderList.append("");
    }

    ui->viewGrassStadiumsTable->setColumnCount(7);
    ui->viewGrassStadiumsTable->setRowCount(size);
    ui->viewGrassStadiumsTable->setHorizontalHeaderLabels(horizontalHeaderList);
    ui->viewGrassStadiumsTable->setVerticalHeaderLabels(verticalHeaderList);

    //Set column width for columns
    ui->viewGrassStadiumsTable->setColumnWidth(0, 180);
    ui->viewGrassStadiumsTable->setColumnWidth(1, 200);
    ui->viewGrassStadiumsTable->setColumnWidth(2, 180);
    ui->viewGrassStadiumsTable->setColumnWidth(3, 280);
    ui->viewGrassStadiumsTable->setColumnWidth(4, 120);
    ui->viewGrassStadiumsTable->setColumnWidth(5, 120);
    ui->viewGrassStadiumsTable->setColumnWidth(6, 250);

    //Set the # of rows for the table
    row = 0;

    for(it = stadiumMap.begin(); it != stadiumMap.end(); it++)
    {
        if(it.value().getGrassField() == true)
        {
            //Show stadium name
            //Dynamically create a "cell" of the table
            tableItem = new QTableWidgetItem();
            //Set stadium name to the tableItem
            tableItem->setText(it.value().getStadiumName());
            //Place the tableItem in the desired location in the table
            ui->viewGrassStadiumsTable->setItem(row, 0, tableItem);

            //Show team name
            tableItem = new QTableWidgetItem();
            tableItem->setText(it.value().getTeamName());
            ui->viewGrassStadiumsTable->setItem(row, 1, tableItem);

            //Show National/American League
            tableItem = new QTableWidgetItem();
            tableItem->setText(it.value().getLeague() == 'A'? "American League": "National League");
            ui->viewGrassStadiumsTable->setItem(row, 2, tableItem);

            //Show Street Address
            tableItem = new QTableWidgetItem();
            tableItem->setText(it.value().getAddress());
            ui->viewGrassStadiumsTable->setItem(row, 3, tableItem);

            //Show Phone Number
            tableItem = new QTableWidgetItem();
            tableItem->setText(it.value().getPhoneNumber());
            ui->viewGrassStadiumsTable->setItem(row, 4, tableItem);

            //Show DateOpened
            tableItem = new QTableWidgetItem();
            tableItem->setText(it.value().getDateOpened().toString("yyyy / MM / dd"));
            ui->viewGrassStadiumsTable->setItem(row, 5, tableItem);

            //Show Seating Capacity
            tableItem = new QTableWidgetItem();
            tableItem->setText(it.value().getCapacity());
            ui->viewGrassStadiumsTable->setItem(row, 6, tableItem);

            row++;

        }
    }

    ui->viewGrassPage->show();
    ui->viewStadiumsPage->hide();
}

void MainWindow::on_pushButton_15_clicked()
{
    ui->viewGrassPage->hide();
    ui->viewStadiumsPage->show();
}

