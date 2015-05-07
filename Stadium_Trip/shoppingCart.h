#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <QWidget>
#include <vector>
#include <stadium.h>
#include "souvenir.h"
#include <QTabWidget>
#include <QListWidget>
#include <QDesktopServices>
#include <QUrl>
#include <QTextBrowser>
#include <QScrollArea>
#include <QScrollBar>
#include <QHash>

namespace Ui {
class shoppingCart;
}

class shoppingCart : public QWidget
{
    Q_OBJECT

public:
    explicit shoppingCart(QWidget *parent = 0);
    ~shoppingCart();
    shoppingCart(const QHash<String, Stadium> & List);
    void fillAllLists();
    void setList(const QHash<String, Stadium>& list);


private slots:
    void on_pushButton_checkout_clicked();

    void on_pushButton_updateCart_clicked();

private:
    QHash<String, Stadium>               wineryList;
    QHash<String, QTextBrowser*>         totalBottleEachWinery;
    QHash<String, QTextBrowser*>         totalEachStadium;
    Ui::shoppingCart*                    ui;
    QHash<QHash <QLineEdit*> >           souvenirListsMap;
    double                               grandTotal;
};

#endif // SHOPPINGCART_H
