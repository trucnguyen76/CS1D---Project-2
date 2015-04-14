#ifndef STADIUM_H
#define STADIUM_H
#include <QString>
#include <QDate>
#include <QVector>
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
                    QDate   setDate);

            void    setStadiumName(QString set);
            void    setTeamName(QString set);
            void    setAddress(QString set);
            void    setPhoneNumber(QString set);
            void    setLeague(QChar set);
            void    setDateOpened(QDate set);

            QString getStadiumName();
            QString getTeamName();
            QString getAddress();
            QString getPhoneNumber();
            QChar   getLeague();
            QDate   getDateOpened();


    private:
            QString           stadiumName;
            QString           teamName;
            QString           address;
            QString           phoneNumber;
            QChar             league;
            QDate             dateOpened;
            QVector<Souvenir> souvenirList;
};

#endif // STADIUM_H
