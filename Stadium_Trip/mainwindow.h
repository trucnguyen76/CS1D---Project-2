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
#include "shoppingCart.h"
#include "ui_mainwindow.h"
#include <QTableView>
#include <QTableWidgetItem>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void setPvec(int set);
    void setSvec(QString set);
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

    void on_addStadiumBtn_clicked();

    void on_pushButton_10_clicked();

    void on_shoppingCartBtn_clicked();

    void on_viewStadiumBtn_clicked();

    void on_viewMajorLeagueBtn_clicked();

    void on_viewAmericanLeagueBtn_clicked();

    void on_viewNationalLeagueBtn_clicked();

    void on_viewGrassSurfaceBtn_clicked();


//    void clickToSort(int index);


    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_13_clicked();


    void on_MSTBtn_clicked();

    void on_pushButton_16_clicked();

    void on_addStadiumButton_clicked();

    void on_modifyStadiumBtn_clicked();

    void on_modifyButtton_clicked();

    void on_backButton_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_20_clicked();

    void on_backBtn_2_clicked();

    void on_select_Stadium_clicked();

    void on_deleteSourvenirBtn_clicked();

    void on_backButton2_clicked();

    void on_modifySouvenirBtn_clicked();

    void on_addSouvenirBtn_clicked();

    void on_SaveSouveniBnt_clicked();

private:
        Ui::MainWindow *ui;
        QHash<QString,Stadium> stadiumMap;
        Graph stadiumGraph;
        QString username;
        QString password;
        int parentSize;
        vector<QString> sVec;
        vector<int> pVec;
        shoppingCart cart;
};

#endif // MAINWINDOW_H
