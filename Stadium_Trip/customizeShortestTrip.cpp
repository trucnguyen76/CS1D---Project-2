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

     ui->textBrowser_2->clear();

     if(chosenStadium != NULL)
     {
         stadiumInfo = chosenStadium->text();

         stadiumInfo.remove(QRegExp("\n.*\n.*\n.*\n.*\n.*\n.*\n"));
         stadiumInfo.remove(QRegExp("Stadium Name: "));
    //     qDebug() << stadiumInfo;

         ui->customizeShortestPage->hide();
         ui->customizeShortestPage2->show();
         ui->shortestTripPage2Label->setText("The Shortest Trip from " + stadiumInfo + " is: ");

         stadiumIndex = stadiumGraph.searchVertex(stadiumInfo);

         ui->textBrowser_2->setText(stadiumGraph.Dikstras(stadiumIndex));
     }
     else
     {
         QMessageBox::information(this, "Error", "Plese select a stadium to start");
     }

}

void MainWindow::on_pushButton_7_clicked()
{
    ui->customizeShortestPage2->hide();
    ui->planVacationPage->show();
}
