#include "stadium.h"

Stadium::Stadium()
    :stadiumName(""), teamName(""), address(""), phoneNumber(""), league('X'), grassField(false), dateOpened(2015,1,01)
{
    Souvenir cap("Baseball cap",25.99);
    Souvenir bat("Baseball bat", 35.35);
    Souvenir pennant("Team pennant", 12.99);
    Souvenir baseball("Autographed baseball", 19.99);

//    souvenirList.reserve(4);
    souvenirList.insert(cap.getName(), cap);
    souvenirList.insert(bat.getName(), bat);
    souvenirList.insert(pennant.getName(), pennant);
    souvenirList.insert(baseball.getName(), baseball);
}


Stadium::Stadium(QString setStadiumName, QString setTeamName, QString setAddress, QString setPhoneNumber, QChar setLeague, bool setGrassField, QDate setDate)
    :stadiumName(setStadiumName), teamName(setTeamName), address(setAddress), phoneNumber(setPhoneNumber), league(setLeague), grassField(setGrassField), dateOpened(setDate)
{
    Souvenir cap("Baseball cap",25.99);
    Souvenir bat("Baseball bat", 35.35);
    Souvenir pennant("Team pennant", 12.99);
    Souvenir baseball("Autographed baseball", 19.99);

//    souvenirList.reserve(4);
    souvenirList.insert(cap.getName(), cap);
    souvenirList.insert(bat.getName(), bat);
    souvenirList.insert(pennant.getName(), pennant);
    souvenirList.insert(baseball.getName(), baseball);
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

int Stadium::getNumSouvenir()
{
   return souvenirList.size();
}

void Stadium::setCapacity(QString set)
{
    capacity = set;
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

QString Stadium::getCapacity()
{
    return capacity;
}

QString Stadium::displayStadium()
{
    return  "Stadium Name: " + stadiumName           + '\n'  +
            "Team Name: "    + teamName              + '\n'  +
            (league == 'A'?"American League": "National League") + '\n' +
            "Address: "      + address               + '\n'  +
            "Phone Number: " + phoneNumber           + '\n'  +
            "Date Opened: "  + dateOpened.toString() + '\n'  +
            "Capacity: "     + capacity              + '\n';
}
QHash<QString, Souvenir> Stadium::getSouvenirList()
{
    return souvenirList;
}

