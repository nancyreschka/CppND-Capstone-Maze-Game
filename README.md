# CPPND: Capstone Maze Game Example

The starter repo for this Capstone project in the [Udacity C++ Nanodegree Program - CPPND: Capstone Snake Game Example](https://github.com/udacity/CppND-Capstone-Snake-Game). The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses, and also https://github.com/alinp25/MazeGenerator.

This is a maze game where the player (in yellow) can walk (using the up, left, right, down keys) toward the goal (in blue). The player cannot cross borders. The player can make scores while eating some food (in red) on it's way to the goal. At the beginning of the game the player can choose the size of the maze. The maze is always a quadratic maze. The food is randomly created.

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./MazeGame`.

## Adressed Rubric points

* Loops, Functions, I/O - The project demonstrates an understanding of C++ functions and control structures.: for loops i.e. maze.cpp line 45-50, while-loops i.e. maze.cpp line 56
* Loops, Functions, I/O - The project accepts user input and processes the input.: main.cpp line 9-15
* Object Oriented Programming - The project uses Object Oriented Programming techniques.
* Object Oriented Programming - Classes use appropriate access specifiers for class members.
* Object Oriented Programming - Class constructors utilize member initialization lists.
* Object Oriented Programming - Classes encapsulate behavior.