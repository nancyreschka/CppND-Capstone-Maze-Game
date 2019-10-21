#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "snake.h"
#include "player.h"
#include "maze.h"

class Controller {
 public:
  void HandleInput(bool &running, Snake &snake, Player &player, Maze &maze) const;

 private:
  void ChangeDirection(Snake &snake, Snake::Direction input,
                       Snake::Direction opposite) const;
  void ChangeDirection(Player &player, Player::Direction input, Maze &maze) const;
};

#endif