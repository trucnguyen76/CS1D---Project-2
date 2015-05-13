#include "mainwindow.h"

void MainWindow::initializeGraph()
{
    //Insert Vertex
    foreach(Stadium stadium, stadiumMap)
    {
        stadiumGraph.insertVertex(stadium.getStadiumName());
    }

    stadiumGraph.insertEdge("Safeco Field", "AT&T Park", 680);
    stadiumGraph.insertEdge("Safeco Field", "Rogers Center", 2070);
    stadiumGraph.insertEdge("Safeco Field", "Target Field", 1390);
    stadiumGraph.insertEdge("AT&T Park", "Dodger Stadium", 340);
    stadiumGraph.insertEdge("O.co Coliseum", "Chase Field", 650);
    stadiumGraph.insertEdge("Angels Stadium of Anaheim", "PETCO Park", 110);
    stadiumGraph.insertEdge("Dodger Stadium", "Target Field", 1500);
    stadiumGraph.insertEdge("PETCO Park", "Chase Field", 300);
    stadiumGraph.insertEdge("PETCO Park", "Coors Field", 830);
    stadiumGraph.insertEdge("Chase Field", "Minute Maid Park", 1115);
    stadiumGraph.insertEdge("Chase Field", "Coors Field", 580);
    stadiumGraph.insertEdge("Chase Field", "Globe Life Park in Arlington", 870);
    stadiumGraph.insertEdge("Coors Field", "Kauffman Stadium", 560);
    stadiumGraph.insertEdge("Coors Field", "Globe Life Park in Arlington", 650);
    stadiumGraph.insertEdge("Globe Life Park in Arlington", "Minute Maid Park", 230);
    stadiumGraph.insertEdge("Globe Life Park in Arlington", "Kauffman Stadium", 460);
    stadiumGraph.insertEdge("Globe Life Park in Arlington", "Turner Field", 740);
    stadiumGraph.insertEdge("Minute Maid Park", "Marlins Park", 965);
    stadiumGraph.insertEdge("Minute Maid Park", "Tropicana Field", 700);
    stadiumGraph.insertEdge("Minute Maid Park", "Busch Stadium", 680);
    stadiumGraph.insertEdge("Kauffman Stadium", "Busch Stadium", 235);
    stadiumGraph.insertEdge("Kauffman Stadium", "US Cellular Field", 415);
    stadiumGraph.insertEdge("Target Field", "Miller Park", 300);
    stadiumGraph.insertEdge("Target Field", "Busch Stadium", 465);
    stadiumGraph.insertEdge("Busch Stadium", "Great American Ball Park", 310);
    stadiumGraph.insertEdge("US Cellular Field", "Miller Park", 80);
    stadiumGraph.insertEdge("US Cellular Field", "Comerica Park", 240);
    stadiumGraph.insertEdge("US Cellular Field", "Great American Ball Park", 250);
    stadiumGraph.insertEdge("Miller Park", "Rogers Center", 430);
    stadiumGraph.insertEdge("Great American Ball Park", "Turner Field", 375);
    stadiumGraph.insertEdge("Great American Ball Park", "Tropicana Field", 790);
    stadiumGraph.insertEdge("Great American Ball Park", "Progressive Field", 225);
    stadiumGraph.insertEdge("Great American Ball Park", "PNC Park", 260);
    stadiumGraph.insertEdge("Comerica Park", "Progressive Field", 90);
    stadiumGraph.insertEdge("Comerica Park", "Rogers Center", 210);
    stadiumGraph.insertEdge("Progressive Field", "PNC Park", 115);
    stadiumGraph.insertEdge("Rogers Center", "PNC Park", 225);
    stadiumGraph.insertEdge("Rogers Center", "Fenway Park", 430);
    stadiumGraph.insertEdge("Fenway Park", "Citi Field", 195);
    stadiumGraph.insertEdge("Citi Field", "PNC Park", 315);
    stadiumGraph.insertEdge("Citi Field", "Citizens Bank Park", 80);
    stadiumGraph.insertEdge("Citizens Bank Park", "Oriole Park at Camden Yards", 90);
    stadiumGraph.insertEdge("Oriole Park at Camden Yards", "PNC Park", 195);
    stadiumGraph.insertEdge("Oriole Park at Camden Yards", "Turner Field", 560);
    stadiumGraph.insertEdge("Oriole Park at Camden Yards", "Marlins Park", 930);
    stadiumGraph.insertEdge("Fenway Park", "Marlins Park", 1255);
    stadiumGraph.insertEdge("Marlins Park", "Tropicana Field", 210);
    stadiumGraph.insertEdge("Marlins Park", "Turner Field", 600);
    stadiumGraph.insertEdge("AT&T Park", "O.co Coliseum", 0);
    stadiumGraph.insertEdge("Dodger Stadium", "Angels Stadium of Anaheim", 0);
    stadiumGraph.insertEdge("Wrigley Field", "US Cellular Field", 0);
    stadiumGraph.insertEdge("Yankee Stadium", "Citi Field", 0);
    stadiumGraph.insertEdge("Oriole Park at Camden Yards", "Nationals Park", 0);


//    stadiumGraph.printMatrix();




}
