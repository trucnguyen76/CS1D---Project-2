#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDoubleSpinBox>
#include <QSpinBox>


void MainWindow::on_modifyStadiumListBtn_clicked()
{
    ui->adminPage->hide();
    ui->modifyStadiumPage->show();
    ui->distanceTable->setColumnCount(2);
    ui->distanceTable->setHorizontalHeaderItem(0, new QTableWidgetItem("Distance"));
    ui->distanceTable->setHorizontalHeaderItem(1, new QTableWidgetItem("Stadium Name"));
    ui->distanceTable->verticalHeader()->setVisible(false);

    int i = 0;
    foreach(Stadium stadium, stadiumMap)
    {

        ui->distanceTable->insertRow(i);
        QSpinBox *spinBox = new QSpinBox(ui->distanceTable);
        spinBox->setMaximum(20000);
        ui->distanceTable->setCellWidget(i, 0, spinBox);
       // qDebug() << stadium.getStadiumName();
        ui->distanceTable->setItem(i, 1, new QTableWidgetItem((stadium.getStadiumName())));


        i++;
    }

}
