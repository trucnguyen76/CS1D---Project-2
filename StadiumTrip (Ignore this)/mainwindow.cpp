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

void MainWindow::on_modifyStadiumListBtn_clicked()
{
    ui->adminPage->hide();
    ui->modifyStadiumPage->show();
}

void MainWindow::on_logInBtn_clicked()
{
    ui->mainPage->hide();
    //ui->adminLogInLabel->show();
    ui->adminLogIn->show();
    ui->usernameInput->clear();
    ui->passwordInput->clear();
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

void MainWindow::on_quitBtn_clicked()
{
    this->close();
}



void MainWindow::on_addSouvenirBtn_clicked()
{
    ui->adminPage->hide();
    ui->add_souvenir_page->show();
    QHash<QString, int>::const_iterator it = souvenirList.begin();
//    for(int i=0;i<Stadium.souvenirList.size();i++)
//    {
//        QDebug << it.key();
//        it++;
//    }
    ui->current_souveniers_box->append("hello");
}

void MainWindow::on_back_suvenir_button_clicked()
{
    ui->adminPage->show();
    ui->add_souvenir_page->hide();

}

void MainWindow::on_addToList_souvenir_button_clicked()
{
    if(ui->souvenir_name_text_box->text().length()>1)
    {
        Souvenir newSouvenir(ui->souvenir_name_text_box->text(),double(ui->souvenir_price_text_box->text().toDouble()));
//        Stadium.souvenirList.insert(newSouvenir.getName(),newSouvenir);
    }
}
