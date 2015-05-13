#include "mainwindow.h"
void MainWindow::on_deleteSourvenirBtn_clicked()
{
      QListWidgetItem *item = ui->souvenir_list->currentItem();

      QString str =  item->text();
       qDebug() << str;
       QListWidgetItem* chosenStadium = ui->stadium_list_2->currentItem();
       QString stadiumInfo;
       int     stadiumIndex;
       QString souvenirName;
       Stadium stadium;
       QHash<QString, Stadium>::iterator it;



       if(item != NULL)
       {
           stadiumInfo = chosenStadium->text();

           souvenirName = item->text();
           souvenirName.remove(QRegExp("\n.*"));

           it =  stadiumMap.find(stadiumInfo);
           (it.value().getSouvenirList()).remove(souvenirName);

           ui->souvenir_list->clear();
           foreach(Souvenir souvenir, it.value().getSouvenirList())
           {
                 ui->souvenir_list->addItem(souvenir.getSouvenirInfo());
           }
           foreach(Souvenir souvenir, it.value().getSouvenirList())
           {
                 qDebug() << (souvenir.getSouvenirInfo());
           }
       }
       else
       {
           QMessageBox::information(this, "Error", "Plese select a souvenir to delete");
       }

       ui->adminPage->show();
       ui->modifySouvenirPage->hide();
}

void MainWindow::on_addSouvenirBtn_clicked()
{
    QListWidgetItem* chosenStadium = ui->stadium_list_2->currentItem();
    QHash<QString, Stadium>::iterator it;
    Souvenir temp;
    temp.setName(ui->souvenir_name_text_box->text());
    temp.setPrice(ui->souvenir_price_text_box->text().toDouble());
    qDebug() << temp.getName() << QString::number(temp.getPrice());
    Stadium stadium;
    QString stadiumInfo;
    stadiumInfo = chosenStadium->text();
    it = stadiumMap.find(stadiumInfo);
    it.value().getSouvenirList().insert(temp.getName(),temp);
    ui->souvenir_list->clear();
    foreach(Souvenir souvenir, it.value().getSouvenirList())
    {
          ui->souvenir_list->addItem(souvenir.getSouvenirInfo());
    }

    foreach(Souvenir souvenir, it.value().getSouvenirList())
    {
          qDebug() << souvenir.getName();
    }

    cart.setList(stadiumMap);

    ui->adminPage->show();
    ui->modifySouvenirPage->hide();

}

void MainWindow::on_modifySouvenirBtn_clicked()
{
    // Get the pointer to the currently selected item.
      QListWidgetItem *item = ui->souvenir_list->currentItem();

      QString str =  item->text();
      QListWidgetItem* chosenStadium = ui->stadium_list_2->currentItem();
      QString stadiumInfo;
      QString souvenirName;
      QHash<QString, Stadium>::iterator it;
      QHash<QString,Souvenir>::iterator souvenirIt;
    stadiumInfo = chosenStadium->text();
//           qDebug() << stadiumInfo;

   souvenirName = item->text();
   souvenirName.remove(QRegExp("\n.*"));
   it = stadiumMap.find(stadiumInfo);
   souvenirIt = it.value().getSouvenirList().find(souvenirName);
    souvenirIt = it.value().getSouvenirList().find(souvenirName);

     QMessageBox::information(this, "Notice","To modify an item, enter the new name or price in the textfields and click save");
    ui->SaveSouveniBnt->show();
    ui->souvenir_price_text_box->setText(souvenirIt.value().getPriceStr());
    ui->souvenir_name_text_box->setText(souvenirIt.value().getName());
}

void MainWindow::on_select_Stadium_clicked()
{

    ui->souvenir_list->clear();
    Stadium myS;
    QString current = ui->stadium_list_2->currentItem()->text();
   QHash<QString, Stadium>::iterator it;
    it = stadiumMap.find(current);
    foreach(Souvenir souvenir, it.value().getSouvenirList())
    {
          ui->souvenir_list->addItem(souvenir.getSouvenirInfo());
    }
}

void MainWindow::on_backButton2_clicked()
{
    ui->modifySouvenirPage->hide();
    ui->adminPage->show();
}

void MainWindow::on_SaveSouveniBnt_clicked()
{
    // Get the pointer to the currently selected item.
      QListWidgetItem *item = ui->souvenir_list->currentItem();

      QString str =  item->text();
      QListWidgetItem* chosenStadium = ui->stadium_list_2->currentItem();
      QString stadiumInfo;
      QString souvenirName;
      QHash<QString, Stadium>::iterator it;
      QHash<QString,Souvenir>::iterator souvenirIt;

       if(item != NULL)
       {
           stadiumInfo = chosenStadium->text();
//           qDebug() << stadiumInfo;

          souvenirName = item->text();
          souvenirName.remove(QRegExp("\n.*"));
          it = stadiumMap.find(stadiumInfo);
          souvenirIt = it.value().getSouvenirList().find(souvenirName);

          it.value().getSouvenirList().remove(souvenirIt.key());

          on_addSouvenirBtn_clicked();

          ui->adminPage->show();
          ui->modifySouvenirPage->hide();

       }
       else
       {
           QMessageBox::information(this, "Error", "Plese select a souvenir to modify");
       }
}

void MainWindow::on_modifySouvenirListBtn_clicked()
{
    QString str;
    QHash<QString, Souvenir>::iterator it;
    Stadium myS;

    ui->stadiumNameBox_2->clear();
    ui->souvenir_list->clear();
    ui->souvenir_name_text_box->clear();
    ui->souvenir_price_text_box->clear();

    ui->adminPage->hide();
    ui->modifySouvenirPage->show();
    it = myS.getSouvenirList().begin();

    foreach(Stadium stadium, stadiumMap)
    {
        ui->stadium_list_2->addItem(stadium.getStadiumName());

    }
    ui->SaveSouveniBnt->hide();


}
