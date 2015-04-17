/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *mainPage;
    QLabel *ballGame_image;
    QPushButton *quitBtn;
    QPushButton *logInBtn;
    QLabel *adminLogInLabel;
    QPushButton *shoppingCartBtn;
    QPushButton *viewStadiumBtn;
    QPushButton *planVacationBtn;
    QWidget *page;
    QWidget *modifySouvenirPage;
    QPushButton *modifySouvenirBtn;
    QPushButton *addSouvenirBtn;
    QPushButton *deleteSourvenirBtn;
    QPushButton *pushButton;
    QWidget *adminPage;
    QPushButton *modifySouvenirListBtn;
    QPushButton *modifyStadiumListBtn;
    QPushButton *pushButton_2;
    QWidget *modifyStadiumPage;
    QPushButton *modifyStadiumBtn;
    QPushButton *addStadiumBtn;
    QPushButton *pushButton_3;
    QWidget *planVacationPage;
    QPushButton *shortestAngelBtn;
    QPushButton *customizeShortestBtn;
    QPushButton *MSTBtn;
    QPushButton *pushButton_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(643, 505);
        MainWindow->setAcceptDrops(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, -1, 641, 451));
        mainPage = new QWidget();
        mainPage->setObjectName(QStringLiteral("mainPage"));
        ballGame_image = new QLabel(mainPage);
        ballGame_image->setObjectName(QStringLiteral("ballGame_image"));
        ballGame_image->setGeometry(QRect(220, 20, 200, 200));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ballGame_image->sizePolicy().hasHeightForWidth());
        ballGame_image->setSizePolicy(sizePolicy);
        ballGame_image->setAlignment(Qt::AlignCenter);
        quitBtn = new QPushButton(mainPage);
        quitBtn->setObjectName(QStringLiteral("quitBtn"));
        quitBtn->setGeometry(QRect(250, 390, 150, 41));
        logInBtn = new QPushButton(mainPage);
        logInBtn->setObjectName(QStringLiteral("logInBtn"));
        logInBtn->setGeometry(QRect(520, 370, 75, 23));
        adminLogInLabel = new QLabel(mainPage);
        adminLogInLabel->setObjectName(QStringLiteral("adminLogInLabel"));
        adminLogInLabel->setGeometry(QRect(520, 350, 101, 16));
        shoppingCartBtn = new QPushButton(mainPage);
        shoppingCartBtn->setObjectName(QStringLiteral("shoppingCartBtn"));
        shoppingCartBtn->setGeometry(QRect(250, 340, 150, 41));
        viewStadiumBtn = new QPushButton(mainPage);
        viewStadiumBtn->setObjectName(QStringLiteral("viewStadiumBtn"));
        viewStadiumBtn->setGeometry(QRect(250, 290, 150, 41));
        planVacationBtn = new QPushButton(mainPage);
        planVacationBtn->setObjectName(QStringLiteral("planVacationBtn"));
        planVacationBtn->setGeometry(QRect(250, 240, 150, 41));
        stackedWidget->addWidget(mainPage);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        modifySouvenirPage = new QWidget();
        modifySouvenirPage->setObjectName(QStringLiteral("modifySouvenirPage"));
        modifySouvenirBtn = new QPushButton(modifySouvenirPage);
        modifySouvenirBtn->setObjectName(QStringLiteral("modifySouvenirBtn"));
        modifySouvenirBtn->setGeometry(QRect(209, 220, 181, 41));
        addSouvenirBtn = new QPushButton(modifySouvenirPage);
        addSouvenirBtn->setObjectName(QStringLiteral("addSouvenirBtn"));
        addSouvenirBtn->setGeometry(QRect(210, 170, 181, 41));
        addSouvenirBtn->setAcceptDrops(false);
        deleteSourvenirBtn = new QPushButton(modifySouvenirPage);
        deleteSourvenirBtn->setObjectName(QStringLiteral("deleteSourvenirBtn"));
        deleteSourvenirBtn->setGeometry(QRect(210, 270, 181, 41));
        deleteSourvenirBtn->setAcceptDrops(false);
        pushButton = new QPushButton(modifySouvenirPage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(490, 400, 75, 23));
        stackedWidget->addWidget(modifySouvenirPage);
        adminPage = new QWidget();
        adminPage->setObjectName(QStringLiteral("adminPage"));
        modifySouvenirListBtn = new QPushButton(adminPage);
        modifySouvenirListBtn->setObjectName(QStringLiteral("modifySouvenirListBtn"));
        modifySouvenirListBtn->setGeometry(QRect(219, 230, 181, 41));
        modifyStadiumListBtn = new QPushButton(adminPage);
        modifyStadiumListBtn->setObjectName(QStringLiteral("modifyStadiumListBtn"));
        modifyStadiumListBtn->setGeometry(QRect(220, 180, 181, 41));
        modifyStadiumListBtn->setAcceptDrops(false);
        pushButton_2 = new QPushButton(adminPage);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(510, 420, 75, 23));
        stackedWidget->addWidget(adminPage);
        modifyStadiumPage = new QWidget();
        modifyStadiumPage->setObjectName(QStringLiteral("modifyStadiumPage"));
        modifyStadiumBtn = new QPushButton(modifyStadiumPage);
        modifyStadiumBtn->setObjectName(QStringLiteral("modifyStadiumBtn"));
        modifyStadiumBtn->setGeometry(QRect(220, 240, 181, 41));
        addStadiumBtn = new QPushButton(modifyStadiumPage);
        addStadiumBtn->setObjectName(QStringLiteral("addStadiumBtn"));
        addStadiumBtn->setGeometry(QRect(221, 190, 181, 41));
        addStadiumBtn->setAcceptDrops(false);
        pushButton_3 = new QPushButton(modifyStadiumPage);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(490, 410, 75, 23));
        stackedWidget->addWidget(modifyStadiumPage);
        planVacationPage = new QWidget();
        planVacationPage->setObjectName(QStringLiteral("planVacationPage"));
        shortestAngelBtn = new QPushButton(planVacationPage);
        shortestAngelBtn->setObjectName(QStringLiteral("shortestAngelBtn"));
        shortestAngelBtn->setGeometry(QRect(210, 180, 181, 41));
        shortestAngelBtn->setAcceptDrops(false);
        customizeShortestBtn = new QPushButton(planVacationPage);
        customizeShortestBtn->setObjectName(QStringLiteral("customizeShortestBtn"));
        customizeShortestBtn->setGeometry(QRect(209, 230, 181, 41));
        MSTBtn = new QPushButton(planVacationPage);
        MSTBtn->setObjectName(QStringLiteral("MSTBtn"));
        MSTBtn->setGeometry(QRect(209, 280, 181, 41));
        pushButton_4 = new QPushButton(planVacationPage);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(490, 420, 75, 23));
        stackedWidget->addWidget(planVacationPage);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 643, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        ballGame_image->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        quitBtn->setText(QApplication::translate("MainWindow", "Quit", 0));
        logInBtn->setText(QApplication::translate("MainWindow", "Log in", 0));
        adminLogInLabel->setText(QApplication::translate("MainWindow", "Administrator Log In", 0));
        shoppingCartBtn->setText(QApplication::translate("MainWindow", "Shopping Cart", 0));
        viewStadiumBtn->setText(QApplication::translate("MainWindow", "View Stadiums", 0));
        planVacationBtn->setText(QApplication::translate("MainWindow", "Plan A Vacation", 0));
        modifySouvenirBtn->setText(QApplication::translate("MainWindow", "Modify Souvenir", 0));
        addSouvenirBtn->setText(QApplication::translate("MainWindow", "Add Souvenir", 0));
        deleteSourvenirBtn->setText(QApplication::translate("MainWindow", "Delete Souvenir", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Back", 0));
        modifySouvenirListBtn->setText(QApplication::translate("MainWindow", "Modify Souvenir List", 0));
        modifyStadiumListBtn->setText(QApplication::translate("MainWindow", "Modify Stadium List", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Back", 0));
        modifyStadiumBtn->setText(QApplication::translate("MainWindow", "Modify Stadium", 0));
        addStadiumBtn->setText(QApplication::translate("MainWindow", "Add Stadium", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Back", 0));
        shortestAngelBtn->setText(QApplication::translate("MainWindow", "Shortest Trip from Angel Stadium", 0));
        customizeShortestBtn->setText(QApplication::translate("MainWindow", "Customize Shortest Trip", 0));
        MSTBtn->setText(QApplication::translate("MainWindow", "Minimum Spanning Tree", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
