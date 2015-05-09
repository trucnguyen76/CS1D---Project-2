/**************************************************************************
 * AUTHOR     	: Elva Nguyen
 * STUDENT ID 	: 366160
 * ASSIGNMENT#12: Dijkstra's Algorithm
 * CLASS      	: Computer Science 1D
 * SECTION    	: T - Th 5:30 - 9:20pm
 * DUE DATE   	: 4/9/15
 *************************************************************************/
#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <QString>
#include <iomanip>
#include <iostream>
#include <QString>
#include <QDebug>
#include <string>

using namespace std;

struct Vertex
{
    QString  name;       //Vertex name
    int     number;     //Vertex number
};

class Graph
{
    static const int INFINITY = 10000;

private:
    vector <Vertex>          vertexList;			//The Vertex list
    vector<vector<double> >	adjacencyMatrix;
    int totalVertex;								//Total num of vertices

public:
    /************************************************************************
     * Graph()
     *  This constructor will initialize the variables
     ***********************************************************************/
    Graph();

    /************************************************************************
     * Graph()
     *  This destructor will destroy all the variables
     ***********************************************************************/
    ~Graph();

    /************************************************************************
     * insertEdge()
     *  This method will insert an edge between origin vertex and destination
     *      vertex with the given weight
     *  -> RETURN nothing
     *  POST: put the edge's weight into the adjacencyMatrix
     * **If undirected -> add to 2 spots
     *   If difrected -> add to 1 spot
     ***********************************************************************/
    void insertEdge(int originNumber, 		//IN - The number of origin vertex
    				int destinationNumber, 	//IN - The number of dest vertex
    				double weight);			//IN - The weight of the edge

    /************************************************************************
     * insertEdge()
     *  This method will insert an edge between origin vertex and destination
     *      vertex with the given weight
     *  -> RETURN nothing
     *  POST: put the edge's weight into the adjacencyMatrix
     * **If undirected -> add to 2 spots
     *   If difrected -> add to 1 spot
     ***********************************************************************/
    void insertEdge(QString originName, 		//IN - The name of origin vertex
                    QString destinationName,    //IN - The name of dest vertex
                    double weight);             //IN - The weight of the edge

    /************************************************************************
     * insertVertex()
     *  This method will insert a vertex name vName
     *  -> RETURN nothing
     *  POST: create new vertex and add that new vertex to vertex list
     ***********************************************************************/
    void insertVertex(QString vName);	//IN - The Vertex name

    /************************************************************************
     * searchVertex()
     *  This method will search for the vertex and return its number
     *  -> RETURN nothing
     *  POST: create new vertex and add that new vertex to vertex list
     ***********************************************************************/
    int  searchVertex(QString vName);   //IN - The Vertex name

    /************************************************************************
     * Dikstras()
     *  This method will find the shortest path from a vertex to the rest of the
     *  	vertices
     *  -> RETURN QString the cost as well as the path taken to each
     *      vetices from the start vertex
     ***********************************************************************/
    QString Dikstras(int startVertex); //IN  - The number of the start vertex

    /************************************************************************
     * printMatrix()
     *  This method will print the graph adjacencyList
     *  -> RETURN nothing
     ***********************************************************************/
    void printMatrix();

    /************************************************************************
     * calcMST()
     *  This method will calculate the output the minimum spanning tree
     *  -> RETURN nothing
     ***********************************************************************/
    void    calcMST();

protected:

//    /************************************************************************
//     * printMatrix()
//     *  This method will print the matrix in the parameter
//     *  -> RETURN nothing
//     ***********************************************************************/
//    void printMatrix(double matrix[][totalVertex]);	//IN - weight Matrix

    int     minKey(vector<int> key, vector<bool> mstSet, int size);
    void    printMST(vector<int> &parent, int n);

};

#endif // GRAPH_H
