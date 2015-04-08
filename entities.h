#include <stdint.h>


#ifndef BRICK_BATTLE_ENTITIES
#define BRICK_BATTLE_ENTITES 1

#define BALL_DIM             4

typedef uint32_t bb_color;

class entity {
public:
  uint32_t x, y;
  uint32_t width, height;
};

class ball : public entity {
public:
  ball(uint32_t a, uint32_t b) {
    x =  a;
    y = b;
    width = BALL_DIM;
    height = BALL_DIM;
  }
};

class tile : public entity {
private:
  /*
  int x, y;
  int width, height;
  bool is_broken;
  */

};


#endif
