#include "circle.h"

void Circle::setup(int x, int y) {
  radius = 30;
  xPos = radius + (2 * x * (radius + 1));
  yPos = radius + (2 * y * (radius + 1));

  color.set(ofRandom(255), ofRandom(255), ofRandom(255));

}

void Circle::update() {
}

void Circle::draw1() {
  ofSetColor(color);
  ofDrawCircle(xPos, yPos, radius);
  for (int i = 0; i <= 7; i++) {
    ofColor colorInner = color;
    colorInner.r = 0;
    ofSetColor(colorInner);
    ofDrawCircle(xPos + i, yPos + i, 10);
  }
}

void Circle::draw2() {
  ofSetColor(color);
  ofDrawCircle(xPos, yPos, radius);
  for (int i = 0; i <= 7; i++) {
    ofColor colorInner = color;
    colorInner.setSaturation(i * 10);
    ofSetColor(colorInner);
    ofDrawCircle(xPos + i, yPos + i, radius - (5 + (i * 5)));
  }
}

void Circle::draw3() {
  ofSetColor(color);
  ofDrawCircle(xPos, yPos, radius);
  for (int i = 0; i <= 7; i++) {
    ofColor colorInner = color;
    colorInner.setSaturation(colorInner.getSaturation() + (i * 20));
    colorInner.setBrightness(colorInner.getBrightness() + (i * 20));
    if (i % 2 == 0) {
      colorInner.r = 0;
    } else {
      colorInner.g = 0;
    }
    ofSetColor(colorInner);
    ofDrawCircle(xPos + i, yPos + i, radius - (2 + (i * 2)));
  }
}

void Circle::draw4() {
  ofSetColor(color);
  ofDrawCircle(xPos, yPos, radius);
  for (int i = 0; i <= 7; i++) {
    ofColor colorInner = color;
    colorInner.setSaturation(colorInner.getSaturation() + (i * 20));
    colorInner.setBrightness(colorInner.getBrightness() + (i * 20));
    if (i % 2 == 0) {
      colorInner.r = 0;
    } else {
      colorInner.g = 0;
    }
    ofSetColor(colorInner);
    ofDrawCircle(xPos + i, yPos + i, radius - (2 + (i * 2)));
  }
}

void Circle::draw5() {
  ofSetColor(color);
  ofDrawCircle(xPos, yPos, radius);
  for (int i = 0; i <= 7; i++) {
    ofColor colorInner = color;
    colorInner.setSaturation(colorInner.getSaturation() + i);
    colorInner.setBrightness(colorInner.getBrightness() + i);
    if (i % 2 == 0) {
      colorInner.r = ((10 * i) + ofRandom(0, 10));
    } else {
      colorInner.g = ((10 * i) + ofRandom(0, 10));
    }
    ofSetColor(colorInner);
    ofDrawCircle(xPos + i, yPos + i, radius - (2 + (i * 2)));
  }
}

void Circle::draw6() {
  ofSetColor(color);
  ofDrawCircle(xPos, yPos, radius);
  for (int i = 0; i <= 7; i++) {
    ofColor colorInner = color;
    colorInner.setSaturation(colorInner.getSaturation() + i);
    colorInner.setBrightness(colorInner.getBrightness() + i);
    if (i % 2 == 0) {
      colorInner.r = ((10 * i) + ofRandom(0, 10));
    } else {
      colorInner.g = ((10 * i) + ofRandom(0, 10));
    }
    ofSetColor(colorInner);
    ofDrawCircle(xPos, yPos, radius - (2 + (i * 2)));
  }
}

void Circle::draw7() {
  ofSetColor(color);
  ofDrawCircle(xPos, yPos, radius);
  for (int i = 0; i <= 7; i++) {
    ofColor colorInner = color;
    colorInner.setSaturation(colorInner.getSaturation() + i);
    colorInner.setBrightness(colorInner.getBrightness() + i);
    if (i % 2 == 0) {
      colorInner.r = ((10 * i) + ofRandom(0, 10));
    } else {
      colorInner.g = ((10 * i) + ofRandom(0, 10));
    }
    ofSetColor(colorInner);
    ofDrawCircle(xPos, yPos, radius - (2 + (i * 2)));
  }
}

void Circle::draw8() {
  ofSetColor(color);
  ofDrawCircle(xPos, yPos, radius);
  for (int i = 0; i <= 7; i++) {
    ofColor colorInner = color;
    colorInner.setSaturation(colorInner.getSaturation() + i);
    colorInner.setBrightness(colorInner.getBrightness() + i);
    if (i % 2 == 0) {
      colorInner.r = ((10 * i) + ofRandom(0, 10));
    } else {
      colorInner.g = ((10 * i) + ofRandom(0, 10));
    }
    ofSetColor(colorInner);
    ofDrawCircle(xPos, yPos, radius - (2 + (i * 2)));
  }
}
