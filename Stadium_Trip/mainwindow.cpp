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
    loadData();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_planVacationBtn_clicked()
{
    ui->mainPage->hide();
    ui->planVacationPage->show();
}

void MainWindow::on_modifySouvenirListBtn_clicked()
{
    ui->adminPage->hide();
    ui->modifySouvenirPage->show();
}

void MainWindow::on_modifyStadiumListBtn_clicked()
{
    ui->adminPage->hide();
    ui->modifyStadiumPage->show();
}

void MainWindow::on_logInBtn_clicked()
{
//    adminLogIn.show();
    ui->mainPage->hide();
    ui->adminPage->show();
}

void MainWindow::on_pushButton_clicked()
{
    ui->modifySouvenirListBtn->hide();
    ui->adminPage->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->adminPage->hide();
    ui->mainPage->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->modifyStadiumPage->hide();
    ui->adminPage->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->planVacationPage->hide();
    ui->mainPage->show();
}


