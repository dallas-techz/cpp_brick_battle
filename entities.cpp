#ifndef BRICK_BATTLE_ENTITES
#define BRICK_BATTLE_ENTITES

#define BB_NUM_TILES 30

#include <string>

class Ball {
};

class Paddle {
};

class Tile {
private:
  int x;
  int y;
  bool is_broken;
  std::string color;
};

class Player {
private:
  Paddle p;
  Tile tiles[30];
  bool is_local;
  int score;
};


#endif
