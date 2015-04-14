#include <ncurses.h>
#include <iostream>
#include <stdint.h>

#include "entities.h"


#define BRICKBATTLE_MAIN 1

#define TOTAL_SCREEN_WIDTH 160
#define TOTAL_SCREEN_HEIGHT 30
#define GAME_SCREEN_WIDTH 160
#define GAME_SCREEN_HEIGHT 28
#define HEADER_SCREEN_WIDTH 160
#define HEADER_SCREEN_HEIGHT 2


/*
  Playing field
  2 player
     |_ paddle
     |_ set of tiles
     |_ score
     |_ socket
  Ball
 */

uint32_t init_io(void) {

  initscr();
  keypad(stdscr, true);
  
  noecho();

  return 0;
}

int main(int argc, char * argv[]) {
  
  ball b(2,2);

  

  return 0;
}


