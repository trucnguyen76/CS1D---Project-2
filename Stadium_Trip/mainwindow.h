#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "adminwindow.h"

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

private:
    Ui::MainWindow *ui;
    AdminWindow adminLogIn;
};

#endif // MAINWINDOW_H
