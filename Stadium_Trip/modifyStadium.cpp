#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDoubleSpinBox>
#include <QSpinBox>

void MainWindow::on_modifyStadiumBtn_clicked()
{
    ui->modifyStadiumPage->hide();
    ui->changeStadiumPage->show();
    foreach(Stadium stadium, stadiumMap)
    {
        ui->StadiumComboBox->addItem(stadium.getStadiumName());
    }
}

void MainWindow::on_modifyButtton_clicked()
{

}
