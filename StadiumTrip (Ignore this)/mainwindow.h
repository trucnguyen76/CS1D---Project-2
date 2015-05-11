#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QHash>
#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QListWidgetItem>
#include <QMessageBox>
#include "stadium.h"
#include "graph.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_quitBtn_clicked();

    void on_planVacationBtn_clicked();

    void on_modifySouvenirListBtn_clicked();

    void on_modifyStadiumListBtn_clicked();

    void on_logInBtn_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void loadData();

    void on_shortestAngelBtn_clicked();

    void initializeGraph();

    void on_backBtn_clicked();

    void on_customizeShortestBtn_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_addSouvenirBtn_clicked();

    void on_back_suvenir_button_clicked();

    void on_addToList_souvenir_button_clicked();

private:
    Ui::MainWindow *ui;
    QHash<QString,Stadium> stadiumMap;
    Graph stadiumGraph;
    QString username;
    QString password;


};

#endif // MAINWINDOW_H
