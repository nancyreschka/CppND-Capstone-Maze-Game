#ifndef RENDERER_H
#define RENDERER_H

#include <vector>
#include "SDL.h"
#include "player.h"
#include "room.h"

class Renderer {
 public:
  Renderer(const std::size_t screen_width, const std::size_t screen_height,
           const std::size_t grid_width, const std::size_t grid_height);
  ~Renderer();

  void Render(Player const player, SDL_Point const &food, std::vector <Room> mazeGrid);
  void UpdateWindowTitle(int score, Uint32 timeDuration);
  void setFinished();
  bool isFinished();

 private:
  SDL_Window *sdl_window;
  SDL_Renderer *sdl_renderer;
  bool finished;

  const std::size_t screen_width;
  const std::size_t screen_height;
  const std::size_t grid_width;
  const std::size_t grid_height;

  void renderMaze(SDL_Renderer* renderer, std::vector <Room> mazeGrid);
};

#endif