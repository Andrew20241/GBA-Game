#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

// TODO: Create any necessary structs

// Define playable boundaries
#define PLAY_AREA_X_MIN 66 // 56
#define PLAY_AREA_Y_MIN 16 
#define PLAY_AREA_X_MAX 194 // 184
#define PLAY_AREA_Y_MAX 144 


struct snake {
   int snakeX[100];
   int snakeY[100];
   int snakeLength;
   int snakeSize;
   int speedX;
   int speedY;
   int snakeSpeed;
};

struct apple {
    int appleExist;
    int appleX;
    int appleY;
};

struct animation {
    int fpsCounter;
    int animations;
    int oldanimationsX;
    int oldanimationsY;
};

void placeApple(void);
void clear(void);

#endif
