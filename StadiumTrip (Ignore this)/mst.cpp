#include <iostream>
#include <iomanip>
#include <QDebug>

using namespace std;

// Initial List of Stadiums
string str[25] = {"PETCO Park", "Dodger/Angel Stadium", "AT&T Park/Coliseum", "Safeco Field",
 "Chase Field", "Coors Field", "Minute Maid Park", "Rangers Ballpark",
 "Kauffman Stadium", "Busch Stadium", "Target Field", "Us Cellular Field/Wrigley Field",
 "Miller Park", "Marlins Park", "Tropicana Field", "Turner Field", "Great American Ballpark",
 "Progressive Field", "Comerica Park", "PNC Park", "Rogers Center", "Nationals Park/Camden Yards",
 "Citizens Bank Park", "Citi Field/Yankee Stadium", "Fenway Park"};

// Initializes vector with values in str[25]
vector<string> baseballStadiums (str, str + sizeof(str) / sizeof(str[0]) );

// Finds and returns the minimum key
int minKey(vector<int> key, vector<bool> mstSet, int size)
{
   // Initialize min value
   int min = INT_MAX;
   int min_index;

   for (int v = 0; v < size; v++)
   {
     if ((mstSet[v] == false) && (key[v] < min))
     {
         min = key[v];
         min_index = v;
     }
   }

   return min_index;
}


/****************************************************************************************
 * Prints the MST to console
 * NOT USED IN QT, ONLY FOR DEBUGGING
 ****************************************************************************************/

//void printMST(vector<int> &parent, int n, vector<vector<int> > &graph)
//{
//	qDebug() <<"//////////////////////////////////////////////////////////////////\n"
//			"                  MINIMUM SPANNING TREE						  \n"
//			"/////////////////////////////////////////////////////////////////\n\n";
//	qDebug() << "----------------------------------------------------------------\n";
//	int total = 0;
//   for ( int i = 1; i < n; i++)
//   {

//	    qDebug()  << baseballStadiums.at(parent[i]);
//      qDebug() <<  " --> " << baseballStadiums[i];
//      qDebug() <<"\nWEIGHT: " << graph[i].at(parent[i]);
//      qDebug() << endl;
//      qDebug() << "----------------------------------------------------------------\n\n";
//      total += graph[i].at(parent[i]);
//   }

//   qDebug() << "--------------------------------------\n";
//   qDebug() << "Total Distance:             " << total << " miles";
//}


/****************************************************************************************
 * calcMST - Function to construct MST for a graph represented using an adjacency
 *           matrix
 ****************************************************************************************/

void calcMST(vector<vector<int> > graph)
{
     int V = graph.size();  // Number of vertices
     vector<int> parent; 	// Array to store constructed MST
     vector<int> key;   	// Key values used to pick minimum weight edge in cut
     vector<bool> mstSet;   // To represent set of vertices not yet included in MST

     // Reserve space in vectors
     parent.reserve(V);
     key.reserve(V);
     mstSet.reserve(V);

     // Initialize all keys as INFINITE/False
     for (int i = 0; i < V; i++)
     {
         key.push_back(INT_MAX);
         mstSet.push_back(false);
     }


     key[0] = 0;             // Make key 0 so that this vertex is picked as first vertex
     parent[0] = -1;         // First node is always root of MST

     // The MST will have V vertices
     for (int count = 0; count < V-1; count++)
     {
        // Pick the minimum key vertex from the set of vertices
        // not yet included in MST
        int u = minKey(key, mstSet, V);

        // Add the picked vertex to the MST Set
        mstSet[u] = true;

        // Update key value and parent index of the adjacent vertices of
        // the picked vertex. Consider only those vertices which are not yet
        // included in MST
        for (int v = 0; v < V; v++)
        {
            // graph[u][v] is non zero only for adjacent vertices of m
            // mstSet[v] is false for vertices not yet included in MST
            // Update the key only if graph[u][v] is smaller than key[v]
           if ((graph[u][v] && mstSet[v] == false) && (graph[u][v] <  key[v]))
           {
             parent[v]  = u;
             key[v] = graph[u][v];
           }
        }
     }


     /******************************
      * printMST - prints to console
      * used for debugging only
      * ****************************/
     //printMST(parent, V, graph);
}
