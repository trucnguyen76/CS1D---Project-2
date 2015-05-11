#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::on_pushButton_8_clicked()
{
    ui->adminLogIn->hide();
    ui->mainPage->show();
}

void MainWindow::on_pushButton_9_clicked()
{
    QString inputUsername;
    QString inputPassword;

    inputUsername = ui->usernameInput->text();
    inputPassword = ui->passwordInput->text();

    if(inputUsername == username && inputPassword == password)
   {
        QMessageBox::information(this, "Log In", "Log In Successfully");
        ui->adminPage->show();
        ui->adminLogIn->hide();
    }
    else
    {
        QMessageBox::information(this,"Log In Error","Username or Password is incorrect" );
    }
}

