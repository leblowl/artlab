#ifndef _CIRCLE
#define _CIRCLE

#include "ofMain.h"

class Circle {

  public:
    int xPos;
    int yPos;
    int radius;
    ofColor color;

    void setup(int x, int y);
    void update();
    void draw();
};
#endif
