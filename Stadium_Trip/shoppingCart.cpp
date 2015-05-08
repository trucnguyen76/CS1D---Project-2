#include "shoppingCart.h"
#include "ui_shoppingCart.h"


shoppingCart::shoppingCart(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::shoppingCart)
{
    ui->setupUi(this);
    this->setWindowTitle("Shopping Cart");

    grandTotal = 0;

    ui->currentTotal->setText(QString::number(grandTotal));
    ui->mainMenu->show();
}

shoppingCart::~shoppingCart()
{
    delete ui;
}

void shoppingCart::fillAllLists()
{
    int                 xSouvenirInfo;
    int                 ySouvenirInfo;
    int                 xNumberBottle;
    int                 yNumberSouvenir;
    int                 xLabelSouvenir;
//    int                 index;
    QWidget*            newTabPtr;
    QWidget*            widgetPtr;
//    QListWidget*        newList;
    QLabel*             label;
//    QTextBrowser*       totalBottleText;
    QTextBrowser*       totalWineryText;
//    QScrollArea*        scrollArea;
    QLineEdit*          numberOfBottle;
    QHash<QString, QLineEdit*>* numberSouvenirListEachStadium;
//    QScrollBar*         scrollBar;


    ui->stadiumTab->clear();
    ui->currentTotal->setText("0");

//    //Clear the whole vector of vector -> After this -> vector = NULL
//    while(!souvenirListsMap.empty())
//    {
//        while(!(souvenirListsMap.at(souvenirListsMap.size()-1).empty()))
//        {
//            souvenirListsMap.at(souvenirListsMap.size() - 1).pop_back();
//        }

//        souvenirListsMap.pop_back();
//    }

    souvenirListsMap.clear();

//    //Clear those vector
//    //Can combine since they basically has the same size
//    while(!totalEachStadium.empty())
//    {
//        totalEachStadium.pop_back();
//        totalBottleEachWinery.pop_back();
//    }

    totalEachStadium.clear();
//    totalBottleEachWinery.clear();


    //Create the tabs
    foreach(Stadium stadium, stadiumMap)
    {
        newTabPtr = new QWidget();
        widgetPtr = new QWidget(newTabPtr);
        widgetPtr->setGeometry(20, 20, 366, 700);

//        scrollArea = new QScrollArea(newTabPtr);
//        scrollArea->setStyleSheet("background-color:white;");
//        scrollArea->setGeometry(10, 20, 370, 225);

        numberSouvenirListEachStadium = new QHash<QString, QLineEdit*>;

//        label = new QLabel("Total Bottles: ",newTabPtr);
//        label->move(400, 40);

//        totalBottleText = new QTextBrowser(newTabPtr);
//        totalBottleText->setGeometry(400, 65, 113, 25);
//        totalBottleText->setText("0");


        label = new QLabel("Total: ",newTabPtr);
        label->move(400, 90);

        totalWineryText = new QTextBrowser(newTabPtr);
        totalWineryText->setGeometry(400, 115, 113, 25);
        totalWineryText->setText("0");


        xSouvenirInfo = 5;
        ySouvenirInfo = 10;
        xLabelSouvenir = 240;
        xNumberBottle = 260;
        yNumberSouvenir = 10;

        //Create a list of souvenir for each tab
        foreach(Souvenir souvenir, stadium.getSouvenirList())
//        for(souvenirIndex = 0; souvenirIndex < stadiumMap.at(stadiumIndex).getNumProducts().toInt(); souvenirIndex++)
        {
            //Set wine info
            label = new QLabel(widgetPtr);
            label->setGeometry(xSouvenirInfo, ySouvenirInfo, 210, 50);
            label->setText(souvenir.getSouvenirInfo());

            //Set the "x" label for bottles
            label = new QLabel("x",widgetPtr);
            label->setGeometry(xLabelSouvenir, yNumberSouvenir, 30, 20);

            //Set the line edit for number of bottles
            numberOfBottle = new QLineEdit(widgetPtr);
            numberOfBottle->setGeometry(xNumberBottle, yNumberSouvenir, 90, 20);

            ySouvenirInfo += 50;
            yNumberSouvenir += 50;

            numberSouvenirListEachStadium->insert(souvenir.getName(),numberOfBottle);
        }
//        scrollArea->setWidget(widgetPtr);

//        scrollArea->show();
        ui->stadiumTab->addTab(newTabPtr, stadium.getStadiumName());

        totalEachStadium.insert(stadium.getStadiumName(), totalWineryText);
//        totalBottleEachWinery.insert(stadium.getStadiumName(), totalBottleText);
        souvenirListsMap.insert(stadium.getStadiumName(), *numberSouvenirListEachStadium);
    }
}

void shoppingCart::setList(const QHash<QString, Stadium> &list)
{
    stadiumMap = list;
}


void shoppingCart::on_pushButton_checkout_clicked()
{
    QString link = "https://www.paypal.com/home";
    QDesktopServices::openUrl(QUrl(link));
}

void shoppingCart::on_pushButton_updateCart_clicked()
{
    int wineryIndex;
    int wineIndex;
    int numOfBottleEachWine;
    int totalBottle;
    double totalPrice;
    double totalEachWine;
    QString wineInfo;
    QString winePrice;

    grandTotal  = 0;


    foreach(Stadium stadium, stadiumMap)
    {
        totalBottle = 0;
        totalPrice  = 0;
        numOfBottleEachWine = 0;
//        totalEachWine = 0;

        foreach(Souvenir souvenir, stadium.getSouvenirList())
        {
            //Read in the number bottle of each wine
            numOfBottleEachWine = (*(*souvenirListsMap.find(stadium.getStadiumName())).find(souvenir.getName()))->displayText().toInt();
            //Calculate the total amount for each wine
            totalEachWine   = numOfBottleEachWine *souvenir.getPrice();

            //Add up the total bottle of each wineries
            totalBottle     += numOfBottleEachWine;

            //Calculate the total price for each winery
            totalPrice += totalEachWine;

            //Calculate the grand total
            grandTotal += totalEachWine;
        }

        (*totalEachStadium.find(stadium.getStadiumName()))->setText(QString::number(totalPrice));
//        (*totalBottleEachWinery.at(wineryIndex))->setText(QString::number(totalBottle));
    }

    ui->currentTotal->setText(QString::number(grandTotal));
}
