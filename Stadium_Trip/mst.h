#ifndef MST_H
#define MST_H
#include <iostream>
#include <iomanip>
#include <QDebug>

using namespace std;

QString str[25] = {"PETCO Park", "Dodger/Angel Stadium", "AT&T Park/Coliseum", "Safeco Field",
 "Chase Field", "Coors Field", "Minute Maid Park", "Rangers Ballpark",
 "Kauffman Stadium", "Busch Stadium", "Target Field", "Us Cellular Field/Wrigley Field",
 "Miller Park", "Marlins Park", "Tropicana Field", "Turner Field", "Great American Ballpark",
 "Progressive Field", "Comerica Park", "PNC Park", "Rogers Center", "Nationals Park/Camden Yards",
 "Citizens Bank Park", "Citi Field/Yankee Stadium", "Fenway Park"};

class MST
{
    public:
            MST();
            ~MST();
            int minKey(vector<int> key, vector<bool> mstSet, int size);
            void printMST(vector<int> &parent, int n);
            void calcMST();
            void addStadium(QString name, vector<int> &weights);
            void print();
    private:
            vector<vector<int> > matrix;
            vector<QString> stadiums;
};

#endif // MST_H
