#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "player.h"
#include "maze.h"

class Controller {
 public:
  void HandleInput(bool &running, Player &player, Maze &maze) const;

 private:
  void ChangeDirection(Player &player, Player::Direction input, Maze &maze) const;
};

#endif