#ifndef MAZE_H
#define MAZE_H

#include <iostream>
#include "SDL2/SDL.h"
#include "room.h"
#include <vector>

class Maze {    
  public: 
    Maze(std::size_t rows, std::size_t colums, std::size_t roomWidth);
    std::vector <Room> getMazeGrid();
    std::size_t getRows() const;
    std::size_t getColums() const;
    std::size_t getRoomWidth() const;
  private: 
    std::size_t kRows;
    std::size_t kColums;
    std::size_t kRoomWidth;
    std::vector <Room> mazeGrid;
    void generateMazeGrid();
    int checkNeighbours(std::vector <Room> maze, Room r);
    void printMaze(std::vector <Room> mazeGrid);
};

#endif