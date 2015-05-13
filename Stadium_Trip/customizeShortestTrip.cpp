#include "mainwindow.h"
#include "ui_mainwindow.h"


void MainWindow::on_customizeShortestBtn_clicked()
{
    ui->planVacationPage->hide();
    ui->customizeShortestPage->show();

    ui->customizeTripList->clear();

    foreach(Stadium stadium, stadiumMap)
    {
        ui->customizeTripList->addItem(stadium.displayStadium());
        qDebug() << stadium.getStadiumName();
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->customizeShortestPage->hide();
    ui->planVacationPage->show();
}

void MainWindow::on_pushButton_6_clicked()
{
    QListWidgetItem* chosenStadium = ui->customizeTripList->currentItem();
    QString stadiumInfo;
    int     stadiumIndex;

    ui->customizeTripList2->clear();

    stadiumInfo = chosenStadium->text();

    stadiumInfo.remove(QRegExp("\n.*\n.*\n.*\n.*\n.*\n.*\n"));
    stadiumInfo.remove(QRegExp("Stadium Name: "));

    if(chosenStadium != NULL)
    {
        foreach(Stadium stadium, stadiumMap)
        {
            if(stadium.getStadiumName() != stadiumInfo)
            {
                ui->customizeTripList2->addItem(stadium.displayStadium());
            }
        }
    }
    else
    {
        QMessageBox::information(this, "Error", "Plese select a stadium to start");
    }

    ui->customizeShortestPage->hide();
    ui->customizeShortestPage2->show();

}

void MainWindow::on_pushButton_7_clicked()
{
    ui->customizeShortestPage3->hide();
    ui->planVacationPage->show();
}

void MainWindow::on_pushButton_18_clicked()
{
    QListWidgetItem* chosenStadium = ui->customizeTripList->currentItem();
    QList<QListWidgetItem *> listIndeces = ui->customizeTripList2->selectedItems();
    int rowIndex                = ui->customizeTripList2->currentRow();
    QString stadiumInfo;
    Stadium stadium;
    QHash<QString, Stadium>   stadiumList;
    int     stadiumIndex;
    int     startStadiumIndex;
    QString textFromDikstras;
    vector<int>  verticesList;

    ui->textBrowser_2->clear();

    if(rowIndex != -1)
    {
        stadiumInfo = chosenStadium->text();

        stadiumInfo.remove(QRegExp("\n.*\n.*\n.*\n.*\n.*\n.*\n"));
        stadiumInfo.remove(QRegExp("Stadium Name: "));

        stadium = stadiumMap.value(stadiumInfo);

        stadiumList.insert(stadiumInfo, stadium);

        ui->customizeShortestPage->hide();
        ui->customizeShortestPage2->show();
        ui->shortestTripPage3Label->setText("The Shortest Trip from " + stadiumInfo + " is: ");

        startStadiumIndex = stadiumGraph.searchVertex(stadiumInfo);

        for(int index = 0; index < listIndeces.size(); index++)
        {
            stadiumInfo = listIndeces.at(index)->text();

            stadiumInfo.remove(QRegExp("\n.*\n.*\n.*\n.*\n.*\n.*\n"));
            stadiumInfo.remove(QRegExp("Stadium Name: "));

            stadiumIndex = stadiumGraph.searchVertex(stadiumInfo);

            stadium = stadiumMap.value(stadiumInfo);
            stadiumList.insert(stadiumInfo, stadium);


            verticesList.push_back(stadiumIndex);
        }

        sort(verticesList.begin(), verticesList.end());
        qDebug() << "after sort\n";
        for(int index = 0; index < verticesList.size(); index++)
        {
            qDebug() << verticesList[index];
        }
        qDebug() << "Enter dikstratas";

        ui->textBrowser_2->setText(stadiumGraph.customizeDikstras(startStadiumIndex, verticesList));

        ui->customizeShortestPage2->hide();
        ui->customizeShortestPage3->show();
    }
    else
    {
        QMessageBox::information(this, "Error", "Plese select at least one stadium to continue");
    }

    cart.setList(stadiumList);
}

void MainWindow::on_pushButton_17_clicked()
{
    ui->customizeShortestPage2->hide();
    ui->customizeShortestPage->show();
}

void MainWindow::on_pushButton_19_clicked()
{
    cart.show();
}

void MainWindow::on_pushButton_20_clicked()
{
    cart.setList(stadiumMap);
    cart.show();
}
