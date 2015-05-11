#include "graph.h"

Graph::Graph()
{
   totalVertex = 0;
}

Graph::~Graph(){}

void Graph::insertEdge(int originNumber, int destinationNumber, double weight)
{
    adjacencyMatrix[originNumber][destinationNumber] = weight;
    adjacencyMatrix[destinationNumber][originNumber] = weight;
}

void Graph::insertEdge(QString originName, QString destinationName, double weight)
{
    int index = 0;
    int originNumber;
    int destinationNumber;
    bool foundOrigin = false;
    bool foundDestination = false;

    while(!(foundOrigin && foundDestination) && index <= totalVertex)
    {
        if(vertexList[index].name == originName)
        {
            foundOrigin = true;
            originNumber = index;
        }

        if(vertexList[index].name == destinationName)
        {
            foundDestination = true;
            destinationNumber = index;
        }

        index++;
    }

    if(foundOrigin && foundDestination)
    {
        insertEdge(originNumber,destinationNumber,weight);
//        qDebug() << "In if found\n";
    }
    else
    {
        qDebug() << "Not found\n";
        qDebug() << originName;
        qDebug() << destinationName;
    }
}

void Graph::insertVertex(QString vName)
{
    Vertex newVertex;

    newVertex.name = vName;
    newVertex.number = totalVertex;

    //Add a new weight at the end of each row
    for(int index = 0; index < totalVertex; index++)
    {
        adjacencyMatrix[index].push_back(INFINITY);
    }
    totalVertex++;

    //Add 1 more row to the matrix
    vector<double> newVector(totalVertex, INFINITY);
    adjacencyMatrix.push_back(newVector);

    vertexList.push_back(newVertex);
}

void Graph::printMatrix()
{
    int col, row;
    for(col = 0; col < totalVertex; col++)
    {
        qDebug() << vertexList[col].name << "   ";
    }
    qDebug() << endl;

    for(row = 0; row < totalVertex; row++)
    {
        qDebug() << vertexList[row].name << "   ";
        for(col = 0; col < totalVertex; col++)
        {
            qDebug()  << adjacencyMatrix[row][col];
        }

        qDebug() << endl;
    }


}

//void Graph::printMatrix(vector<vector<double> > matrix)
//{
//    int col, row;

//    cout << setw(6) << "";

//    for(col = 0; col < totalVertex; col++)
//    {
//        cout << setw(6) << col;
//    }
//    cout << endl;

//    for(row = 0; row < totalVertex; row++)
//    {
//        cout << setw(6) << row;

//        for(col = 0; col < totalVertex; col++)
//        {
//            cout << setw(6) << matrix[row][col];
//        }

//        cout << endl;
//    }
//}


QString Graph::Dikstras(int startVertex)
{
//    //Costs, parents and found Vertices will be parallel vectors
//    vector<double>  costs(totalVertex, INFINITY);
//    vector<int>		parents(totalVertex, INFINITY);
//    vector<bool>    foundVertices(totalVertex, false);
//    vector<int>     path;
//    int             parentOfLowestCost;
//    int             index;
//    int             row;
//    int             col;
//    int             lowestCostIndex;
//    int             totalFoundVertices;
//    int             vertexIndex;
//    int             lowestWeightIndex;
//    int             originVertex;
//    double          lowestCost;
//    double          lowestWeight;
//    double matrix[totalVertex][totalVertex];
    QString output= "";

//    totalFoundVertices = 0;

//    //Copy the adjacency matrix
//    for(row = 0; row < totalVertex; row++)
//    {
//        for(col = 0; col < totalVertex; col++)
//        {
//            matrix[row][col] = adjacencyMatrix[row][col];
//        }
//    }

//    //The parent of startVertex will be itself -> mark as -1
//    parents[startVertex] = -1;

//    //The costs from startVertex to itself is 0;
//    costs[startVertex] = 0;

//    foundVertices[startVertex] = true;

//    totalFoundVertices++;

//    lowestWeight  = INFINITY;
//    for(index = 0; index < totalVertex; index++)
//    {
//        matrix[index][startVertex] = INFINITY;
//    }

//    while(totalFoundVertices < totalVertex)
//    {
//        lowestCost   = INFINITY;

//        for(originVertex = 0; originVertex < totalVertex; originVertex++)
//        {
//            if(foundVertices[originVertex])
//            {
//                lowestWeight = INFINITY;

//                //For loop - find the lowest Weight from that found vertex
//                for(index = 0; index < totalVertex; index++)
//                {
//                    if(matrix[originVertex][index] < lowestWeight)// &&
////                       matrix[originVertex][index] != 0 )
//                    {
//                        lowestWeightIndex = index;
//                        lowestWeight = matrix[originVertex][index];
//                    }
//                }

//                if(costs[originVertex] + lowestWeight < lowestCost)
//                {
//                    lowestCost = costs[originVertex] + lowestWeight;
//                    lowestCostIndex = lowestWeightIndex;
//                    parentOfLowestCost = originVertex;
//                }
//            }
//        }

//        matrix[parentOfLowestCost][lowestCostIndex] = INFINITY;
//        for(index = 0; index < totalVertex; index++)
//        {
//            matrix[index][lowestCostIndex] = INFINITY;
//        }

//        foundVertices[lowestCostIndex] = true;
//        parents[lowestCostIndex] = parentOfLowestCost;

//        costs[lowestCostIndex] = lowestCost;

//        totalFoundVertices++;
//    }

////    output.append( "Shortest Path from ");
////    output.append(vertexList[startVertex].name);
////    output.append("\n\n\n");

////    qDebug() << "Before for\n";
////    cin.ignore(1000, '\n');
//    for(index = 0; index < totalVertex; index++)
//    {
//        if(parents[index] != -1)
//        {
//            output.append("Cost to ");
//            output.append(vertexList[index].name);
//            output.append(" is: ");
//            output.append(QString::number(costs[index]));
//            output.append('\n');

//            vertexIndex = parents[index];

//            path.clear();

//            path.push_back(index);

//            while(vertexIndex != -1)
//            {
//                path.insert(path.begin(), 1, vertexIndex);

//                vertexIndex = parents[path[0]];
//            }

//            output.append( "Path is: ");

//            for(int i = 0; i < path.size(); i++)
//            {
//                output.append( vertexList[path[i]].name);
//                output.append('\t');
//            }

//            output.append("\n\n");
//        }
//    }
    return output;
}

int Graph::searchVertex(QString vName)
{
    bool found = false;
    int index = 0;

    while(!found && index <= totalVertex)
    {
        if(vertexList[index].name == vName)
        {
            found = true;
        }

        index++;
    }

    if(found)
    {
        index--;
    }
    else
    {
        index = -1;
    }

    return index;
}

int Graph::minKey(vector<int> key, vector<bool> mstSet, int size)
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

// A utility function to print the constructed MST stored in parent[]
void Graph:: printMST(vector<int> &parent, int n)
{
    qDebug() <<"//////////////////////////////////////////////////////////////////\n"
            "                  MINIMUM SPANNING TREE						  \n"
            "/////////////////////////////////////////////////////////////////\n\n";
    qDebug() << "----------------------------------------------------------------\n";
    int total = 0;
   for ( int i = 1; i < n; i++)
   {
      qDebug() << vertexList.at(parent[i]).name;
      qDebug() <<  " --> " << vertexList[i].name;
      qDebug() <<"\nWEIGHT: " << adjacencyMatrix[i].at(parent[i]);
      qDebug() << endl;
      qDebug() << "----------------------------------------------------------------\n\n";
      total += adjacencyMatrix[i].at(parent[i]);
   }

   qDebug() << "--------------------------------------\n";
   qDebug() << "Total Distance:             " << total << " miles";
}

// Function to construct and print MST for a matrix represented using adjacency
// matrix representation
void Graph:: calcMST()
{
     int V = adjacencyMatrix.size();    // Number of vertices
     vector<int> parent;                // Array to store constructed MST
     vector<int> key;                   // Key values used to pick minimum weight edge in cut
     vector<bool> mstSet;               // To represent set of vertices not yet included in MST

     // Reserve space in vectors
     parent.reserve(V);
     key.reserve(V);
     mstSet.reserve(V);

     // Initialize all keys as INFINITE/Flase
     for (int i = 0; i < V; i++)
     {
         key.push_back(INT_MAX);
         mstSet.push_back(false);
     }


     key[0] = 0;      // Make key 0 so that this vertex is picked as first vertex
     parent[0] = -1;  // First node is always root of MST

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
            // matrix[u][v] is non zero only for adjacent vertices of m
            // mstSet[v] is false for vertices not yet included in MST
            // Update the key only if matrix[u][v] is smaller than key[v]
           if ((adjacencyMatrix[u][v] && mstSet[v] == false) && (adjacencyMatrix[u][v] <  key[v]))
           {
             parent[v]  = u;
             key[v] = adjacencyMatrix[u][v];
           }
        }
     }

     // print the constructed MST
     printMST(parent, V);
}
