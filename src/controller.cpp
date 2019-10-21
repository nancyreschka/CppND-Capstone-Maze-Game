#include "controller.h"
#include <iostream>
#include "SDL.h"
#include "snake.h"
#include "player.h"
#include "maze.h"

void Controller::ChangeDirection(Snake &snake, Snake::Direction input,
                                 Snake::Direction opposite) const {
  if (snake.direction != opposite || snake.size == 1) snake.direction = input;
  return;
}

void Controller::ChangeDirection(Player &player, Player::Direction input, Maze &maze) const {
  // calculate room number where player is currently located
  int roomNumber = (player.head_x * maze.getRows()) + player.head_y;

  // check if there is no wall in the requested direction
  if((input == Player::Direction::kUp && !maze.getMazeGrid()[roomNumber].getWall(0)) ||
    (input == Player::Direction::kRight && !maze.getMazeGrid()[roomNumber].getWall(1)) ||
    (input == Player::Direction::kDown && !maze.getMazeGrid()[roomNumber].getWall(2)) ||
    (input == Player::Direction::kLeft && !maze.getMazeGrid()[roomNumber].getWall(3))) {
    player.direction = input;
    player.directionUpdated();
  }
}

void Controller::HandleInput(bool &running, Snake &snake, Player &player, Maze &maze) const {
  SDL_Event e;
  while (SDL_PollEvent(&e)) {
    if (e.type == SDL_QUIT) {
      running = false;
    } else if (e.type == SDL_KEYDOWN) {
      switch (e.key.keysym.sym) {
        case SDLK_UP:
          ChangeDirection(snake, Snake::Direction::kUp,
                          Snake::Direction::kDown);
          ChangeDirection(player, Player::Direction::kUp, maze);
          break;

        case SDLK_DOWN:
          ChangeDirection(snake, Snake::Direction::kDown,
                          Snake::Direction::kUp);
          ChangeDirection(player, Player::Direction::kDown, maze);
          break;

        case SDLK_LEFT:
          ChangeDirection(snake, Snake::Direction::kLeft,
                          Snake::Direction::kRight);
          ChangeDirection(player, Player::Direction::kLeft, maze);
          break;

        case SDLK_RIGHT:
          ChangeDirection(snake, Snake::Direction::kRight,
                          Snake::Direction::kLeft);
          ChangeDirection(player, Player::Direction::kRight, maze);
          break;
      }
    }
  }
}