#ifndef MST_H
#define MST_H
#include <iostream>
#include <iomanip>
#include <QDebug>

using namespace std;



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
