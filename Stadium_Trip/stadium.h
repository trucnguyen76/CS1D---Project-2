#ifndef STADIUM_H
#define STADIUM_H
#include <QString>
#include <QDate>
#include <QVector>
#include <QSet>
#include "souvenir.h"

class Stadium
{
    public:
            Stadium();
            ~Stadium();
            Stadium(QString setStadiumName,
                    QString setTeamName,
                    QString setAddress,
                    QString setPhoneNumber,
                    QChar   setLeague,
                    bool    setGrassField,
                    QDate   setDate);

            void    setStadiumName(QString set);
            void    setTeamName(QString set);
            void    setAddress(QString set);
            void    setPhoneNumber(QString set);
            void    setLeague(QChar set);
            void    setGrassField(bool set);
            void    setDateOpened(QDate set);
            void    setCapacity(QString set);

            QString getStadiumName();
            QString getTeamName();
            QString getAddress();
            QString getPhoneNumber();
            QString getCapacity();
            QChar   getLeague();
            bool    getGrassField();
            QDate   getDateOpened();
            QString displayStadium();
            int     getNumSouvenir();
            QHash<QString, Souvenir>&getSouvenirList();


    private:
            QString           stadiumName;
            QString           teamName;
            QString           address;
            QString           phoneNumber;
            QChar             league;
            bool              grassField;
            QDate             dateOpened;
            QHash<QString, Souvenir>    souvenirList;
            QString           capacity;
};

#endif // STADIUM_H
