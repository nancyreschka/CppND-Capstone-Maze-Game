#ifndef GAME_H
#define GAME_H

#include <random>
#include "SDL.h"
#include "controller.h"
#include "renderer.h"
#include "player.h"
#include "room.h"
#include "maze.h"

class Game {
 public:
  Game(std::size_t rows, std::size_t colums, std::size_t roomWidth);
  // Generates the maze, handle the input, update all values and prints the game pad again
  void Run(Controller const &controller, Renderer &renderer,
           std::size_t target_frame_duration);
  // returns the received score - the number of food eaten on the way to the goal
  int GetScore() const;

 private:
  Player player;
  SDL_Point food;
  Maze maze;

  // variables for random number generation for placing food
  std::random_device dev;
  std::mt19937 engine;
  std::uniform_int_distribution<int> random_w;
  std::uniform_int_distribution<int> random_h;

  // indicates how much food was eaten on the way to the goal
  int score;
  // start time of game for calculating the run time of the game
  Uint32 startTimestamp;

  // randomly places one piece of food in the grid
  void PlaceFood();
  void Update(Renderer &renderer);
};

#endif
