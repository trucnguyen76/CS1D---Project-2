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

    ui->phoneBox_2->setValidator(new QIntValidator(0,9999999999,this));
    ui->stadiumNameBox_2->setText("");
    ui->teamNameBox_2->setText("");
    ui->addressBox_2->setText("");
    ui->phoneBox_2->setText("");
}

void MainWindow::on_backButton_clicked()
{
    ui->changeStadiumPage->hide();
    ui->modifyStadiumPage->show();
    ui->StadiumComboBox->clear();
}

void MainWindow::on_modifyButtton_clicked()
{
    Stadium hi = stadiumMap.value(ui->StadiumComboBox->currentText());

    QHash<QString, Stadium>::iterator it = stadiumMap.find(ui->StadiumComboBox->currentText());
    stadiumMap.erase(it);
    qDebug() << hi.displayStadium();
    if(ui->stadiumNameBox_2->text() != "")
    {
        hi.setStadiumName(ui->stadiumNameBox_2->text());
    }
    if(ui->teamNameBox_2->text() != "")
    {
        hi.setTeamName(ui->teamNameBox_2->text());
    }

    if(ui->addressBox_2->text() != "")
    {
        hi.setAddress(ui->addressBox_2->text());
    }

    if(ui->phoneBox_2->text() != "")
    {
        hi.setPhoneNumber(ui->phoneBox_2->text());
    }
    if(ui->grassComboBox_2->currentText() == "Yes")
    {
        hi.setGrassField(true);
    }
    else
    {
       hi.setGrassField(false);

    }

    if(ui->leagueComboBox_2->currentText() == "AL")
    {
       hi.setLeague('A');
    }
    else
    {
       hi.setLeague('N');
    }

    hi.setDateOpened(ui->dateEdit_2->date());

    qDebug() << hi.displayStadium();
    stadiumMap.insert(hi.getStadiumName(), hi);

    ui->changeStadiumPage->hide();
    ui->modifyStadiumPage->show();
    ui->StadiumComboBox->clear();
}

//void MainWindow::on_StadiumComboBox_currentIndexChanged(const QString &arg1)
//{
//    Stadium stadium;
//    stadium = stadiumMap.find(arg1).value();

//    ui->stadiumNameBox_2->setText(stadium.getStadiumName());
//    ui->teamNameBox_2->setText(stadium.getTeamName());
//    ui->addressBox_2->setText(stadium.getAddress());
//    ui->phoneBox_2->setText(stadium.getPhoneNumber());

//}
