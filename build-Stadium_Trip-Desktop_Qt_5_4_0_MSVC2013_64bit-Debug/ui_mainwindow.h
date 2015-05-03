/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
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
    QWidget *adminLogIn;
    QPushButton *pushButton_8;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *usernameInput;
    QLineEdit *passwordInput;
    QPushButton *pushButton_9;
    QWidget *modifySouvenirPage;
    QPushButton *modifySouvenirBtn;
    QPushButton *addSouvenirBtn;
    QPushButton *deleteSourvenirBtn;
    QPushButton *pushButton;
    QWidget *adminPage;
    QPushButton *modifySouvenirListBtn;
    QPushButton *modifyStadiumListBtn;
    QPushButton *pushButton_2;
    QWidget *addStadiumPage;
    QLineEdit *stadiumNameBox;
    QLabel *NameLabel;
    QLabel *teamNameLabel;
    QLineEdit *teamNameBox;
    QLabel *addressLabel;
    QLineEdit *addressBox;
    QLabel *phoneLabel;
    QLineEdit *phoineBox;
    QLabel *leagueLabel;
    QComboBox *leagueComboBox;
    QLabel *dateLabel;
    QDateEdit *dateEdit;
    QLabel *grassLabel;
    QComboBox *grassComboBox;
    QPushButton *pushButton_10;
    QWidget *modifyStadiumPage;
    QPushButton *modifyStadiumBtn;
    QPushButton *addStadiumBtn;
    QPushButton *pushButton_3;
    QWidget *planVacationPage;
    QPushButton *shortestAngelBtn;
    QPushButton *customizeShortestBtn;
    QPushButton *MSTBtn;
    QPushButton *pushButton_4;
    QWidget *shortestfromAngelPage;
    QTextBrowser *textBrowser;
    QPushButton *backBtn;
    QLabel *label;
    QWidget *customizeShortestPage;
    QPushButton *pushButton_5;
    QLabel *label_2;
    QListWidget *customizeTripList;
    QPushButton *pushButton_6;
    QWidget *customizeShortestPage2;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton_7;
    QLabel *shortestTripPage2Label;
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
        adminLogIn = new QWidget();
        adminLogIn->setObjectName(QStringLiteral("adminLogIn"));
        pushButton_8 = new QPushButton(adminLogIn);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(360, 260, 75, 23));
        label_3 = new QLabel(adminLogIn);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(240, 60, 151, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        label_3->setFont(font);
        label_4 = new QLabel(adminLogIn);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(135, 160, 61, 20));
        label_5 = new QLabel(adminLogIn);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(135, 190, 61, 20));
        usernameInput = new QLineEdit(adminLogIn);
        usernameInput->setObjectName(QStringLiteral("usernameInput"));
        usernameInput->setGeometry(QRect(210, 160, 221, 21));
        passwordInput = new QLineEdit(adminLogIn);
        passwordInput->setObjectName(QStringLiteral("passwordInput"));
        passwordInput->setGeometry(QRect(210, 190, 221, 21));
        passwordInput->setEchoMode(QLineEdit::Password);
        pushButton_9 = new QPushButton(adminLogIn);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(460, 260, 75, 23));
        stackedWidget->addWidget(adminLogIn);
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
        addStadiumPage = new QWidget();
        addStadiumPage->setObjectName(QStringLiteral("addStadiumPage"));
        stadiumNameBox = new QLineEdit(addStadiumPage);
        stadiumNameBox->setObjectName(QStringLiteral("stadiumNameBox"));
        stadiumNameBox->setGeometry(QRect(327, 85, 113, 20));
        NameLabel = new QLabel(addStadiumPage);
        NameLabel->setObjectName(QStringLiteral("NameLabel"));
        NameLabel->setGeometry(QRect(187, 85, 131, 16));
        teamNameLabel = new QLabel(addStadiumPage);
        teamNameLabel->setObjectName(QStringLiteral("teamNameLabel"));
        teamNameLabel->setGeometry(QRect(206, 118, 111, 16));
        teamNameBox = new QLineEdit(addStadiumPage);
        teamNameBox->setObjectName(QStringLiteral("teamNameBox"));
        teamNameBox->setGeometry(QRect(328, 117, 113, 20));
        addressLabel = new QLabel(addStadiumPage);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));
        addressLabel->setGeometry(QRect(226, 156, 91, 16));
        addressBox = new QLineEdit(addStadiumPage);
        addressBox->setObjectName(QStringLiteral("addressBox"));
        addressBox->setGeometry(QRect(329, 155, 113, 20));
        phoneLabel = new QLabel(addStadiumPage);
        phoneLabel->setObjectName(QStringLiteral("phoneLabel"));
        phoneLabel->setGeometry(QRect(191, 191, 121, 16));
        phoineBox = new QLineEdit(addStadiumPage);
        phoineBox->setObjectName(QStringLiteral("phoineBox"));
        phoineBox->setGeometry(QRect(329, 192, 113, 20));
        leagueLabel = new QLabel(addStadiumPage);
        leagueLabel->setObjectName(QStringLiteral("leagueLabel"));
        leagueLabel->setGeometry(QRect(222, 232, 91, 16));
        leagueComboBox = new QComboBox(addStadiumPage);
        leagueComboBox->setObjectName(QStringLiteral("leagueComboBox"));
        leagueComboBox->setGeometry(QRect(329, 230, 41, 22));
        dateLabel = new QLabel(addStadiumPage);
        dateLabel->setObjectName(QStringLiteral("dateLabel"));
        dateLabel->setGeometry(QRect(203, 306, 111, 16));
        dateEdit = new QDateEdit(addStadiumPage);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(329, 303, 110, 22));
        dateEdit->setMaximumDateTime(QDateTime(QDate(2015, 5, 17), QTime(23, 59, 59)));
        dateEdit->setMinimumDateTime(QDateTime(QDate(1800, 1, 1), QTime(0, 0, 0)));
        grassLabel = new QLabel(addStadiumPage);
        grassLabel->setObjectName(QStringLiteral("grassLabel"));
        grassLabel->setGeometry(QRect(258, 272, 61, 16));
        grassComboBox = new QComboBox(addStadiumPage);
        grassComboBox->setObjectName(QStringLiteral("grassComboBox"));
        grassComboBox->setGeometry(QRect(329, 269, 41, 22));
        pushButton_10 = new QPushButton(addStadiumPage);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(530, 410, 75, 23));
        stackedWidget->addWidget(addStadiumPage);
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
        shortestfromAngelPage = new QWidget();
        shortestfromAngelPage->setObjectName(QStringLiteral("shortestfromAngelPage"));
        textBrowser = new QTextBrowser(shortestfromAngelPage);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 50, 621, 361));
        textBrowser->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        textBrowser->setLineWrapMode(QTextEdit::NoWrap);
        backBtn = new QPushButton(shortestfromAngelPage);
        backBtn->setObjectName(QStringLiteral("backBtn"));
        backBtn->setGeometry(QRect(540, 420, 75, 23));
        label = new QLabel(shortestfromAngelPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 291, 21));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        stackedWidget->addWidget(shortestfromAngelPage);
        customizeShortestPage = new QWidget();
        customizeShortestPage->setObjectName(QStringLiteral("customizeShortestPage"));
        pushButton_5 = new QPushButton(customizeShortestPage);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(420, 420, 75, 23));
        label_2 = new QLabel(customizeShortestPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 20, 351, 21));
        label_2->setFont(font1);
        customizeTripList = new QListWidget(customizeShortestPage);
        customizeTripList->setObjectName(QStringLiteral("customizeTripList"));
        customizeTripList->setGeometry(QRect(40, 50, 541, 361));
        customizeTripList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        pushButton_6 = new QPushButton(customizeShortestPage);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(510, 420, 75, 23));
        stackedWidget->addWidget(customizeShortestPage);
        customizeShortestPage2 = new QWidget();
        customizeShortestPage2->setObjectName(QStringLiteral("customizeShortestPage2"));
        textBrowser_2 = new QTextBrowser(customizeShortestPage2);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(30, 50, 571, 361));
        textBrowser_2->setLineWrapMode(QTextEdit::NoWrap);
        pushButton_7 = new QPushButton(customizeShortestPage2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(510, 420, 75, 23));
        shortestTripPage2Label = new QLabel(customizeShortestPage2);
        shortestTripPage2Label->setObjectName(QStringLiteral("shortestTripPage2Label"));
        shortestTripPage2Label->setGeometry(QRect(30, 20, 521, 16));
        shortestTripPage2Label->setFont(font1);
        stackedWidget->addWidget(customizeShortestPage2);
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
        pushButton_8->setText(QApplication::translate("MainWindow", "Back", 0));
        label_3->setText(QApplication::translate("MainWindow", "Admin Log In", 0));
        label_4->setText(QApplication::translate("MainWindow", "Username: ", 0));
        label_5->setText(QApplication::translate("MainWindow", "Password: ", 0));
        pushButton_9->setText(QApplication::translate("MainWindow", "Log in", 0));
        modifySouvenirBtn->setText(QApplication::translate("MainWindow", "Modify Souvenir", 0));
        addSouvenirBtn->setText(QApplication::translate("MainWindow", "Add Souvenir", 0));
        deleteSourvenirBtn->setText(QApplication::translate("MainWindow", "Delete Souvenir", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Back", 0));
        modifySouvenirListBtn->setText(QApplication::translate("MainWindow", "Modify Souvenir List", 0));
        modifyStadiumListBtn->setText(QApplication::translate("MainWindow", "Modify Stadium List", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Back", 0));
        NameLabel->setText(QApplication::translate("MainWindow", "Enter the Stadiums Name:", 0));
        teamNameLabel->setText(QApplication::translate("MainWindow", "Enter the team Name:", 0));
        addressLabel->setText(QApplication::translate("MainWindow", "Enter the Adress:", 0));
        phoneLabel->setText(QApplication::translate("MainWindow", "Enter the Phone number:", 0));
        leagueLabel->setText(QApplication::translate("MainWindow", "Select the League:", 0));
        leagueComboBox->clear();
        leagueComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "NL", 0)
         << QApplication::translate("MainWindow", "AL", 0)
        );
        dateLabel->setText(QApplication::translate("MainWindow", "set the date it opened:", 0));
        grassLabel->setText(QApplication::translate("MainWindow", "Grass field:", 0));
        grassComboBox->clear();
        grassComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Yes", 0)
         << QApplication::translate("MainWindow", "No", 0)
        );
        pushButton_10->setText(QApplication::translate("MainWindow", "Back", 0));
        modifyStadiumBtn->setText(QApplication::translate("MainWindow", "Modify Stadium", 0));
        addStadiumBtn->setText(QApplication::translate("MainWindow", "Add Stadium", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Back", 0));
        shortestAngelBtn->setText(QApplication::translate("MainWindow", "Shortest Trip from Angel Stadium", 0));
        customizeShortestBtn->setText(QApplication::translate("MainWindow", "Customize Shortest Trip", 0));
        MSTBtn->setText(QApplication::translate("MainWindow", "Minimum Spanning Tree", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "Back", 0));
        backBtn->setText(QApplication::translate("MainWindow", "Back", 0));
        label->setText(QApplication::translate("MainWindow", "Shortest Path from Angel Stadium:", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "Back", 0));
        label_2->setText(QApplication::translate("MainWindow", "Please Select a Stadium to Start: ", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "Next", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "Back", 0));
        shortestTripPage2Label->setText(QApplication::translate("MainWindow", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
