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
    QWidget *planVacationPage;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(643, 505);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 640, 450));
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
        quitBtn->setGeometry(QRect(250, 360, 150, 41));
        logInBtn = new QPushButton(mainPage);
        logInBtn->setObjectName(QStringLiteral("logInBtn"));
        logInBtn->setGeometry(QRect(520, 370, 75, 23));
        adminLogInLabel = new QLabel(mainPage);
        adminLogInLabel->setObjectName(QStringLiteral("adminLogInLabel"));
        adminLogInLabel->setGeometry(QRect(520, 350, 101, 16));
        shoppingCartBtn = new QPushButton(mainPage);
        shoppingCartBtn->setObjectName(QStringLiteral("shoppingCartBtn"));
        shoppingCartBtn->setGeometry(QRect(250, 310, 150, 41));
        viewStadiumBtn = new QPushButton(mainPage);
        viewStadiumBtn->setObjectName(QStringLiteral("viewStadiumBtn"));
        viewStadiumBtn->setGeometry(QRect(250, 260, 150, 41));
        planVacationBtn = new QPushButton(mainPage);
        planVacationBtn->setObjectName(QStringLiteral("planVacationBtn"));
        planVacationBtn->setGeometry(QRect(250, 210, 150, 41));
        stackedWidget->addWidget(mainPage);
        planVacationPage = new QWidget();
        planVacationPage->setObjectName(QStringLiteral("planVacationPage"));
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

        stackedWidget->setCurrentIndex(0);


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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
