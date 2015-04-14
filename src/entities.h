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
  ball(uint32_t x, uint32_t y) {
    this->x =  x;
    this->y = y;
    this->width = BALL_DIM;
    this->height = BALL_DIM;
  }
};

// class tile : public entity {
// private:
//   /*
//   int x, y;
//   int width, height;
//   bool is_broken;
//   */

// };


#endif
