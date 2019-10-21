#include <iostream>
#include "controller.h"
#include "game.h"
#include "renderer.h"  
#include "constants.h"
  
int main() {
  // read the size of the maze
  int size;
  std::cout << "Please enter the size of the maze. Should be a number between 6 and 64." << std::endl;
  std::cin >> size;
  while(size < 6 || size > 64) {
    std::cout << "Please try again. It should be a number between 6 and 64." << std::endl;
    std::cin >> size;
  }

  Renderer renderer(kScreenWidth, kScreenHeight, size, size);
  Controller controller;
  Game game(size, size, kScreenWidth / size);
  game.Run(controller, renderer, kMsPerFrame);  
  std::cout << "Game has terminated successfully!\n";
  std::cout << "Score: " << game.GetScore() << "\n";
  return 0;
}