#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Stadium Trip");
    QImage ballGame(":/ballgame_icon.png");
    ui->ballGame_image->setScaledContents(true);
    ui->ballGame_image->setPixmap(QPixmap::fromImage(ballGame));
    ui->mainPage->show();
    loadData();
    initializeGraph();
    stadiumGraph.calcMST();
    cart.setList(stadiumMap);

    username = "admin";
    password = "password";
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


void MainWindow::on_logInBtn_clicked()
{
    ui->mainPage->hide();
    ui->adminLogIn->show();

    ui->usernameInput->clear();
    ui->passwordInput->clear();
}

void MainWindow::on_pushButton_clicked()
{
    ui->modifySouvenirPage->hide();
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

void MainWindow::on_quitBtn_clicked()
{
    this->close();
}



void MainWindow::on_pushButton_10_clicked()
{
    ui->addStadiumPage->hide();
    ui->modifyStadiumPage->show();
}

void MainWindow::on_shoppingCartBtn_clicked()
{
    cart.show();
}

void MainWindow::on_viewStadiumBtn_clicked()
{
    ui->mainPage->hide();
    ui->viewStadiumsPage->show();
}


void MainWindow::on_pushButton_12_clicked()
{
    ui->viewStadiumsPage->hide();
    ui->mainPage->show();
}

void MainWindow::setPvec(int set)
{
    pVec.push_back(set);
}

void MainWindow::setSvec(QString set)
{
    sVec.push_back(set);
}

