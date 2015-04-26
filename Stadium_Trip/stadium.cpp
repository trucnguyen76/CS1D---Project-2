#include "stadium.h"

Stadium::Stadium()
    :stadiumName(""), teamName(""), address(""), phoneNumber(""), league('X'), grassField(false), dateOpened(2015,1,01)
{
    Souvenir cap("Baseball cap",25.99);
    Souvenir bat("Baseball bat", 35.35);
    Souvenir pennant("Team pennant", 12.99);
    Souvenir baseball("Autographed baseball", 19.99);

    souvenirList.reserve(4);
    souvenirList.push_back(cap);
    souvenirList.push_back(bat);
    souvenirList.push_back(pennant);
    souvenirList.push_back(baseball);
}


Stadium::Stadium(QString setStadiumName, QString setTeamName, QString setAddress, QString setPhoneNumber, QChar setLeague, bool setGrassField, QDate setDate)
    :stadiumName(setStadiumName), teamName(setTeamName), address(setAddress), phoneNumber(setPhoneNumber), league(setLeague), grassField(setGrassField), dateOpened(setDate)
{
    Souvenir cap("Baseball cap",25.99);
    Souvenir bat("Baseball bat", 35.35);
    Souvenir pennant("Team pennant", 12.99);
    Souvenir baseball("Autographed baseball", 19.99);

    souvenirList.reserve(4);
    souvenirList.push_back(cap);
    souvenirList.push_back(bat);
    souvenirList.push_back(pennant);
    souvenirList.push_back(baseball);
}

Stadium::~Stadium()
{}


void Stadium::setStadiumName(QString set)
{
    stadiumName = set;
}

void Stadium::setTeamName(QString set)
{
    teamName = set;
}

void Stadium::setAddress(QString set)
{
    address = set;
}

void Stadium::setPhoneNumber(QString set)
{
    phoneNumber = set;
}

void Stadium::setLeague(QChar set)
{
    league = set;
}

void Stadium::setGrassField(bool set)
{
    grassField = set;
}

void Stadium::setDateOpened(QDate set)
{
    dateOpened = set;
}

QString Stadium::getStadiumName()
{
    return stadiumName;
}

QString Stadium::getTeamName()
{
    return teamName;
}

QString Stadium::getAddress()
{
    return address;
}

QString Stadium::getPhoneNumber()
{
    return phoneNumber;
}

QChar Stadium::getLeague()
{
    return league;
}

bool Stadium::getGrassField()
{
    return grassField;
}

QDate Stadium::getDateOpened()
{
    return dateOpened;
}
