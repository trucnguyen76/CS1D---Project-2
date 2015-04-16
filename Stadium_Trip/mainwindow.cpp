#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QImage ballGame(":/ballgame_icon.png");
    ui->ballGame_image->setScaledContents(true);
    ui->ballGame_image->setPixmap(QPixmap::fromImage(ballGame));
    ui->mainPage->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_planVacationBtn_clicked()
{

}
