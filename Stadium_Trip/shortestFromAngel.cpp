#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::on_shortestAngelBtn_clicked()
{
    ui->planVacationPage->hide();

    int angelIndex;
    angelIndex = stadiumGraph.searchVertex("Angels Stadium of Anaheim");

//    qDebug() << stadiumGraph.Dikstras(angelIndex);

    ui->textBrowser->clear();

    ui->textBrowser->setText(stadiumGraph.Dikstras(angelIndex));
    ui->shortestfromAngelPage->show();

    cart.setList(stadiumMap);
}

void MainWindow::on_backBtn_clicked()
{
    ui->shortestfromAngelPage->hide();
    ui->planVacationPage->show();
}

void MainWindow::on_backBtn_2_clicked()
{
    cart.show();
}
