#include <iostream>
#include "controller.h"
#include "game.h"
#include "renderer.h"  
#include "constants.h"
  
int main() {
  // read the size of the maze
  int size;
  std::cout << "Please enter the size of the maze. Should be a number between " << kMinMazeSize << " and " << kMaxMazeSize << "." << std::endl;
  std::cin >> size;
  while(size < kMinMazeSize || size > kMaxMazeSize) {
    std::cout << "Please try again. It should be a number between " << kMinMazeSize << " and " << kMaxMazeSize << "." << std::endl;
    std::cin >> size;
  }
  // calculate box size
  int roomSize = kScreenWidth / size;

  Renderer renderer(size * roomSize, size * roomSize, size, size);
  Controller controller;
  Game game(size, size, roomSize);
  game.Run(controller, renderer, kMsPerFrame);  
  std::cout << "Game has terminated successfully!\n";
  std::cout << "Score: " << game.GetScore() << "\n";
  return 0;
}