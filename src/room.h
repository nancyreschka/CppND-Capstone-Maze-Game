#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include "SDL2/SDL.h"

class Room {
  public: 
    Room(int i, int j, int rw);
    void removeWalls(Room &r);
    void removeWall(int wall);
    void printWalls();
    void visit();
    int getPositionInVector(int size);
    int getX();
    int getY();
    bool isVisited();
    int getRoomWidth();
    bool getWall(int i);
  private: 
    int x, y, roomWidth;
    bool walls[4];
    bool visited;  
};

#endif