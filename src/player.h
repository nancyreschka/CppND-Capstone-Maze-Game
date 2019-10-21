#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "SDL.h"

class Player {
 public:
  enum class Direction { kUp, kDown, kLeft, kRight };

  Player(int grid_width, int grid_height)
      : grid_width(grid_width),
        grid_height(grid_height),
        head_x(0.0),
        head_y(0.0) {
          directionUpdate = false;
        }

  void Update();

  void directionUpdated();

  void GrowBody();
  bool PlayerCell(int x, int y);

  Direction direction = Direction::kUp;

  // TODO do I need this?
  float speed{1.0f};
  int size{1};
  bool alive{true};
  float head_x;
  float head_y;

 private:
  void UpdateHead();

  int grid_width;
  int grid_height;
  bool directionUpdate;
};

#endif