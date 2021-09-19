#include "circle.h"

void Circle::setup(int x, int y) {
  radius = 30;
  xPos = radius + (2 * x * (radius + 1));
  yPos = radius + (2 * y * (radius + 1));

  color.set(ofRandom(255), ofRandom(255), ofRandom(255));

}

void Circle::update() {
}

void Circle::draw() {
  ofSetColor(color);
  ofDrawCircle(xPos, yPos, radius);
}
