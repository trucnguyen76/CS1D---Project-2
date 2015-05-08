#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <QWidget>
#include "stadium.h"
#include "souvenir.h"
#include <QTabWidget>
#include <QListWidget>
#include <QDesktopServices>
#include <QUrl>
#include <QTextBrowser>
#include <QScrollArea>
#include <QScrollBar>
#include <QHash>
#include <QLabel>
#include <vector>

namespace Ui {
class shoppingCart;
}

class shoppingCart : public QWidget
{
    Q_OBJECT

public:
    explicit shoppingCart(QWidget *parent = 0);
    ~shoppingCart();
    void fillAllLists();
    void setList(const QHash<QString, Stadium>& list);

private slots:
    void on_pushButton_checkout_clicked();

    void on_pushButton_updateCart_clicked();

private:
    Ui::shoppingCart *ui;
    //QString key: stadium name - value: stadium
    QHash<QString, Stadium>                             stadiumMap;
    //QString key: stadium name
//    QHash<QString, QTextBrowser*>                       totalBottleEachWinery;
    //QString key: stadiumName
    QHash<QString, QTextBrowser*>                       totalEachStadium;
    //Inner QHash: QString key: Souvenir
    //Outer QHash: QString key: Stadium
    QHash<QString, QHash <QString, QLineEdit*> >        souvenirListsMap;
    double                                              grandTotal;
};

#endif // SHOPPINGCART_H

