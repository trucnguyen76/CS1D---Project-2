//#include "mst.h"
//MST::MST()
//{
//    matrix.resize( 25 , vector<int>( 25 , 0 ) );
//    for(int i =0; i < 25; i ++)
//    {
//        stadiums.push_back(str[i]);
//    }


//    for(int i = 0; i < 25; i ++)
//    {
//        for(int j = 0; j < 25; j ++)
//        {
//            matrix[i].at(j) = stadiumMatrix[i][j];
//        }
//    }
//}
//MST::~MST()
//{}
// void MST::print()
// {
//     for(unsigned int i = 0; i < matrix.size(); i ++)
//     {
//         for(unsigned int j = 0; j < matrix.size(); j ++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
//int MST::minKey(vector<int> key, vector<bool> mstSet, int size)
//{
//   // Initialize min value
//   int min = INT_MAX;
//   int min_index;

//   for (int v = 0; v < size; v++)
//   {
//     if ((mstSet[v] == false) && (key[v] < min))
//     {
//         min = key[v];
//         min_index = v;
//     }
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

