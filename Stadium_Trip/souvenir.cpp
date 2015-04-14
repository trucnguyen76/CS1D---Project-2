#include "souvenir.h"

Souvenir::Souvenir()
    :name(""), price(0.00)
{}

Souvenir::~Souvenir()
{}

Souvenir::Souvenir(QString setName, double setPrice)
    :name(setName), price(setPrice)
{};

void Souvenir::setName(QString set)
{
    name = set;
}

void Souvenir::setPrice(double set)
{
    price = set;
}

QString Souvenir::getName()
{
    return name;
}

double Souvenir::getPrice()
{
    return price;
}
