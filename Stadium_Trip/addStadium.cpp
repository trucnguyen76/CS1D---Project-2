#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDoubleSpinBox>
#include <QSpinBox>


void MainWindow::on_modifyStadiumListBtn_clicked()
{
    ui->adminPage->hide();
    ui->modifyStadiumPage->show();

}

void MainWindow::on_addStadiumBtn_clicked()
{
    ui->modifyStadiumPage->hide();
    ui->addStadiumPage->show();
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
        ui->phoineBox->setValidator(new QIntValidator(0,9999999999,this));

        i++;
    }
            ui->stadiumNameBox->setText("");
            ui->addressBox->setText("");
            ui->teamNameBox->setText("");
            ui->phoineBox->setText("");
            ui->capacityBox->setText("");
}

void MainWindow::on_addStadiumButton_clicked()
{
    Stadium *temp;
    temp = new Stadium;
    QSpinBox *sp;
    QString stad;
    double distance;




    if(ui->stadiumNameBox->text() == "")
    {
        ui->errorLabel->setText("All areas are required");
        ui->errorLabel->setStyleSheet("background:#ccc;color:#ff0000;padding:5px");
    }
    else
    {
        temp->setStadiumName(ui->stadiumNameBox->text());
        temp->setTeamName(ui->teamNameBox->text());
        temp->setAddress(ui->addressBox->text());
        if(ui->grassComboBox->currentText() == "Yes")
        {
            temp->setGrassField(true);
        }
        else
        {
           temp->setGrassField(false);

        }
        temp->setPhoneNumber(ui->phoineBox->text());
        if(ui->leagueComboBox->currentText() == "AL")
        {
           temp->setLeague('A');
        }
        else
        {
           temp->setLeague('N');
        }

        temp->setCapacity(ui->capacityBox->text());

        temp->setDateOpened( ui->dateEdit->date());

        stadiumMap.insert(temp->getStadiumName(), *temp);
        stadiumGraph.insertVertex(ui->stadiumNameBox->text());

        for(int i = 0; i < stadiumMap.size()-1; i++ )
        {
            sp =(QSpinBox*)ui->distanceTable->cellWidget(i,0);
            distance = sp->value();
            qDebug() << distance;
            if(distance!= 0)
            {
            stad = ui->distanceTable->item(i,1)->text();
            qDebug() << stad;
            stadiumGraph.insertEdge(ui->stadiumNameBox->text(), stad, distance);
            }
            qDebug() <<i;
        }

        qDebug() << "test";
        ui->addStadiumPage->hide();
        ui->modifyStadiumPage->show();


    }


}
