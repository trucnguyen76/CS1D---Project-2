#ifndef SOUVENIR_H
#define SOUVENIR_H
#include <QString>
class Souvenir
{
    public:
            Souvenir();
            ~Souvenir();
            Souvenir(QString setName, double setPrice);

            void setName(QString set);
            void setPrice(double set);

            QString getName();
            double  getPrice();
            QString getSouvenirInfo();
            QString getPriceStr();



    private:
             QString name;
             double  price;

};

#endif // SOUVENIR_H
