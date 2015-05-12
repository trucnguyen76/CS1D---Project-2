#include "graph.h"
#include "mainwindow.h"

//int arr [25][25] =
//{{0,110,0,0,300,830,0,0,0,0,0,0,0,0,0,0,0,
// 0,0,0,0,0,0,0,0},
//// From Dodger/Angel Stadium [1]
//{110,0,340,0,0,0,0,0,0,0,0,1500,0,0,0,0,0,
// 0,0,0,0,0,0,0,0},
//// From AT&T Park/Coliseum [2]
//{0,340,0,680,650,0,0,0,0,0,0,0,0,0,0,0,0,
// 0,0,0,0,0,0,0,0},
//// From Safeco field [3]
//{0,0,680,0,0,0,0,0,0,0,1390,0,0,0,0,0,
// 0,0,0,0,2070,0,0,0,0},
//// From Chase Field [4]
//{300,0,650,0,0,580,1115,870,0,0,0,0,0,0,0,0,0,
//0,0,0,0,0,0,0,0},
//// From Coors Field [5]
//{830,0,0,0,580,0,0,650,560,0,0,0,0,0,0,0,0,
// 0,0,0,0,0,0,0,0},
//// From Minute Maid Park [6]
//{0,0,0,0,1115,0,0,230,0,680,0,0,0,965,790,0,0,
// 0,0,0,0,0,0,0,0},
//// From Rangers Ballpark [7]
//{0,0,0,0,870,650,230,0,460,0,0,0,0,0,0,740,0,
// 0,0,0,0,0,0,0,0},
//// From Kaufmann Stadium [8]
//{0,0,0,0,0,560,0,460,0,235,0,415,0,0,0,0,0,
//0,0,0,0,0,0,0,0},
//// From Busch Stadium [9]
//{0,0,0,0,0,0,680,0,235,0,465,0,0,0,0,0,310,
//0,0,0,0,0,0,0,0},
//// From Target Field [10]
//{0,1500,0,1390,0,0,0,0,0,465,0,0,300,0,0,0,0,
// 0,0,0,0,0,0,0,0},
// // From US Cellular/Wrigley Field [11]
// {0,0,0,0,0,0,0,0,415,0,0,0,80,0,0,0,250,0,
// 240,0,0,0,0,0,0},
// // From Miller Park [12]
// {0,0,0,0,0,0,0,0,0,0,300,80,0,0,0,0,0,0,0,
//  0,430,0,0,0,0},
//// From Marlins Park [13]
//{0,0,0,0,0,0,965,0,0,0,0,0,0,0,210,600,
// 0,0,0,0,0,930,0,0,1255},
//// From Tropicana Field [14]
// {0,0,0,0,0,0,790,0,0,0,0,0,0,210,0,0,
//790,0,0,0,0,0,0,0,0},
//// From Turner Field [15]
//{0,0,0,0,0,0,0,740,0,0,0,0,0,600,0,0,
//375,0,0,0,0,560,0,0,0},
//// From Great American Ballpark [16]
//{0,0,0,0,0,0,0,0,0,310,0,250,0,0,0,
// 375,0,225,0,260,0,0,0,0,0},
//// From Progressive Field [17]
// {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
// 0,225,0,90,115,0,0,0,0,0},
//// From Comerica Park [18]
// {0,0,0,0,0,0,0,0,0,0,0,240,0,0,0,0,
//  0,90,0,0,210,0,0,0,0},
//// From PNC Park [19]
// {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
//  260,115,0,0,225,195,0,315,0},
//// From Rogers Center [20]
//{0,0,0,2070,0,0,0,0,0,0,0,0,430,0,0,0,
// 0,0,210,225,0,0,0,0,430},
//// From Nationals Park/Camden Yard [21]
// {0,0,0,0,0,0,0,0,0,0,0,0,0,1255,0,
//  560,0,0,0,195,0,0,90,0,0},
//// From Citizens Bank Park [22]
// {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
//  0,0,0,0,0,0,90,0,80,0},
//// From Citi Field [23]
//{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
// 0,0,0,315,0,0,80,0,195},
//// From Fenway Park [24]
//{0,0,0,0,0,0,0,0,0,0,0,0,0,1255,0,0,
// 0,0,0,0,430,0,0,195,0}};
QString str[25] = {"PETCO Park", "Dodger/Angel Stadium", "AT&T Park/Coliseum", "Safeco Field",
 "Chase Field", "Coors Field", "Minute Maid Park", "Rangers Ballpark",
 "Kauffman Stadium", "Busch Stadium", "Target Field", "Us Cellular Field/Wrigley Field",
 "Miller Park", "Marlins Park", "Tropicana Field", "Turner Field", "Great American Ballpark",
 "Progressive Field", "Comerica Park", "PNC Park", "Rogers Center", "Nationals Park/Camden Yards",
 "Citizens Bank Park", "Citi Field/Yankee Stadium", "Fenway Park"};
//void Graph::initializeMatrix()
//{

//    adjacencyMatrix.reserve(25);
//    stadiumNames.reserve(25);
//    for(int i = 0; i < 25; i ++)
//    {
//        for(int j = 0; j < 25; j ++)
//        {
//            adjacencyMatrix[i][j] = 0;


//        }
//        stadiumNames.push_back(str[i]);
//    }


//   insertEdge(0, 4, 300);
//   insertEdge(0, 5, 830);

//   insertEdge(1, 0, 110);
//   insertEdge(1, 1, 0);

//   insertEdge(2, 1, 340);
//   insertEdge(2, 4, 650);
//   insertEdge(2, 2, 0);

//   insertEdge(3, 2, 680);
//   insertEdge(3, 20, 2070);
//   insertEdge(3,10, 1390);

//   insertEdge(4, 6, 1115);
//   insertEdge(4, 5, 580);
//   insertEdge(4, 7, 870);

//   insertEdge(5, 8, 560);
//   insertEdge(5, 7, 650);

//   insertEdge(6, 13, 965);
//   insertEdge(6, 14, 790);
//   insertEdge(6, 9, 680);

//   insertEdge(7, 6, 230);
//   insertEdge(7, 8, 460);
//   insertEdge(7, 15, 740);

//   insertEdge(8, 9, 235);
//   insertEdge(8, 11, 415);

//   insertEdge(9, 16, 310);

//   insertEdge(10, 12, 300);
//   insertEdge(10, 9, 465);

//   insertEdge(11, 12, 80);
//   insertEdge(11, 18, 240);
//   insertEdge(11, 16, 250);
//   insertEdge(11, 11, 0);

//   insertEdge(12, 20, 430);


//   insertEdge(13, 14, 210);
//   insertEdge(13, 15, 600);

//   insertEdge(16, 15, 375);
//   insertEdge(16, 14, 790);
//   insertEdge(16, 17, 225);
//   insertEdge(16, 19, 260);

//   insertEdge(17, 19, 115);

//   insertEdge(18, 17, 90);
//   insertEdge(18, 20, 210);

//   insertEdge(20, 19, 225);
//   insertEdge(20, 24, 430);

//   insertEdge(21, 19, 195);
//   insertEdge(21, 22, 90);
//   insertEdge(21, 21, 0);

//   insertEdge(23, 19, 315);
//   insertEdge(23, 22, 80);
//   insertEdge(23, 23, 0);

//   insertEdge(24, 23, 195);
//   insertEdge(24, 13, 1255);


//   for(int i = 0; i < 25; i ++)
//   {
//     if ((mstSet[v] == false) && (key[v] < min))
//     {
//         min = key[v];
//         min_index = v;
//     }
//       for(int j =0; j < 25; j ++)
//       {
//           qDebug() << adjacencyMatrix[i][j] << " ";
//       }
//       qDebug() << '\n';
//   }

//   return min_index;
//}

//// A utility function to print the constructed MST stored in parent[]
//void MST:: printMST(vector<int> &parent, int n)
//{
//    qDebug() <<"//////////////////////////////////////////////////////////////////\n"
//            "                  MINIMUM SPANNING TREE						  \n"
//            "/////////////////////////////////////////////////////////////////\n\n";
//    qDebug() << "----------------------------------------------------------------\n";
//    int total = 0;
//   for ( int i = 1; i < n; i++)
//   {
//}

//      qDebug()  << stadiums.at(parent[i]);
//      qDebug() <<  " --> " << stadiums[i];
//      qDebug() <<"\nWEIGHT: " << matrix[i].at(parent[i]);
//      qDebug() << endl;
//      qDebug() << "----------------------------------------------------------------\n\n";
//      total += matrix[i].at(parent[i]);
//   }

//   qDebug() << "--------------------------------------\n";
//   qDebug() << "Total Distance:             " << total << " miles";
//}

//// Function to construct and print MST for a matrix represented using adjacency
//// matrix representation
//void MST:: calcMST()
//{
//     int V = matrix.size();  // Number of vertices
//     vector<int> parent; 	// Array to store constructed MST
//     vector<int> key;   	// Key values used to pick minimum weight edge in cut
//     vector<bool> mstSet;   // To represent set of vertices not yet included in MST

//     // Reserve space in vectors
//     parent.reserve(V);
//     key.reserve(V);
//     mstSet.reserve(V);

//     // Initialize all keys as INFINITE/Flase
//     for (int i = 0; i < V; i++)
//     {
//         key.push_back(INT_MAX);
//         mstSet.push_back(false);
//     }


//     key[0] = 0;      // Make key 0 so that this vertex is picked as first vertex
//     parent[0] = -1;  // First node is always root of MST

//     // The MST will have V vertices
//     for (int count = 0; count < V-1; count++)
//     {
//        // Pick the minimum key vertex from the set of vertices
//        // not yet included in MST
//        int u = minKey(key, mstSet, V);

//        // Add the picked vertex to the MST Set
//        mstSet[u] = true;

//        // Update key value and parent index of the adjacent vertices of
//        // the picked vertex. Consider only those vertices which are not yet
//        // included in MST
//        for (int v = 0; v < V; v++)
//        {
//            // matrix[u][v] is non zero only for adjacent vertices of m
//            // mstSet[v] is false for vertices not yet included in MST
//            // Update the key only if matrix[u][v] is smaller than key[v]
//           if ((matrix[u][v] && mstSet[v] == false) && (matrix[u][v] <  key[v]))
//           {
//             parent[v]  = u;
//             key[v] = matrix[u][v];
//           }
//        }
//     }

//     // print the constructed MST
//     printMST(parent, V);
//}

//void MST::addStadium(QString name, vector<int> &weights)
//{
//    stadiums.push_back(name);
//    matrix.push_back(weights);
//    for(int i = matrix.size() -1; i >= 0; i --)
//    {
//        matrix[i].push_back(weights[i]);
//    }
//}

void MainWindow::on_MSTBtn_clicked()
{

    vector<int> p = stadiumGraph.getParent();
    vector<QString> s = stadiumGraph.getStadiumNames();
    vector<vector<double> > matrix = stadiumGraph.getMatrix();

    int total = 0;
    int index;
    int row;
//    int column;
    QTableWidgetItem*   tableItem;
    QStringList         horizontalHeaderList;
    QStringList         verticalHeaderList;
//    QString             longestHeader;

    //Set the headers for each column
    horizontalHeaderList.append("Origin Stadium");
    horizontalHeaderList.append("Destination Stadium");
    horizontalHeaderList.append("Distance (miles)");

    //The header for each row will be empty
    for(index = 0; index < p.size(); index++)
    {
        verticalHeaderList.append("");
    }

    //Set the # of rows and columns for the table
    ui->mstTable->setColumnCount(3);
    ui->mstTable->setRowCount(p.size() - 1);
    ui->mstTable->setHorizontalHeaderLabels(horizontalHeaderList);
    ui->mstTable->setVerticalHeaderLabels(verticalHeaderList);

    //Set column width for columns
    ui->mstTable->setColumnWidth(0, 200);
    ui->mstTable->setColumnWidth(1, 200);
    ui->mstTable->setColumnWidth(2, 180);

    row = 0;
    for(int i = 1; i < p.size(); i ++)
    {
        //Show stadium name
        //Dynamically create a "cell" of the table
        tableItem = new QTableWidgetItem();
        //Set stadium name to the tableItem
        tableItem->setText(s.at(p[i]));
        //Place the tableItem in the desired location in the table
        ui->mstTable->setItem(row, 0, tableItem);

        //Show team name
        tableItem = new QTableWidgetItem();
        tableItem->setText(s.at(i));
        ui->mstTable->setItem(row, 1, tableItem);

        //Show National/American League
        tableItem = new QTableWidgetItem();
        qDebug() << matrix[i].at(p[i]);
        QString weight = QString::number(matrix[i].at(p[i]));
       tableItem->setText(weight);
        ui->mstTable->setItem(row, 2, tableItem);

        total += matrix[i].at(p[i]);
        row++;
    }
    //When the table first shown, sort it by the order in column 0
    ui->mstTable->sortByColumn(0, Qt::AscendingOrder);
    ui->label_7->setText(QString::number(total) + " miles");
    ui->MSTPage->show();
    ui->planVacationPage->hide();


}
void MainWindow::on_pushButton_16_clicked()
{
    ui->MSTPage->hide();
    ui->planVacationPage->show();
}
