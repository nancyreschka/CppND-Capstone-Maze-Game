#include <iostream>
#include "controller.h"
#include "game.h"
#include "renderer.h"

  constexpr std::size_t kFramesPerSecond{60};
  constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr std::size_t kScreenWidth{640};
  constexpr std::size_t kScreenHeight{640};
  
  constexpr std::size_t kRows{16};
  constexpr std::size_t kColums{16};
  constexpr std::size_t kRoomWidth{kScreenWidth / kRows};

int main() {
  
  Renderer renderer(kScreenWidth, kScreenHeight, kRows, kColums);
  Controller controller;
  Game game(kRows, kColums, kRoomWidth);
  game.Run(controller, renderer, kMsPerFrame);  
  std::cout << "Game has terminated successfully!\n";
  std::cout << "Score: " << game.GetScore() << "\n";
  std::cout << "Size: " << game.GetSize() << "\n";
  return 0;
}