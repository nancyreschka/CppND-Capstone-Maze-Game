#include "player.h"
#include <cmath>
#include <iostream>

void Player::Update() {
  // SDL_Point prev_cell{
  //     static_cast<int>(head_x),
  //     static_cast<int>(
  //         head_y)};  // We first capture the head's cell before updating.
  UpdateHead();
  // SDL_Point current_cell{
  //     static_cast<int>(head_x),
  //     static_cast<int>(head_y)};  // Capture the head's cell after updating.

  
  // Update all of the body vector items if the snake head has moved to a new
  // cell.
  // if (current_cell.x != prev_cell.x || current_cell.y != prev_cell.y) {
  //   UpdateBody(current_cell, prev_cell);
  // }
}

void Player::directionUpdated(){
  directionUpdate = true;
}

void Player::UpdateHead() {
  if(directionUpdate){
    switch (direction) {
      case Direction::kUp:
        head_y -= speed;
        break;

      case Direction::kDown:
        head_y += speed;
        break;

      case Direction::kLeft:
        head_x -= speed;
        break;

      case Direction::kRight:
        head_x += speed;
        break;
    }
    directionUpdate = false;
    // Wrap the Snake around to the beginning if going off of the screen.
  head_x = fmod(head_x + grid_width, grid_width);
  head_y = fmod(head_y + grid_height, grid_height);
  }  
}

// Inefficient method to check if cell is occupied by snake.
bool Player::PlayerCell(int x, int y) {
  if (x == static_cast<int>(head_x) && y == static_cast<int>(head_y)) {
    return true;
  }
  // for (auto const &item : body) {
  //   if (x == item.x && y == item.y) {
  //     return true;
  //   }
  // }
  return false;
}