#include "ofApp.h"
#include <iostream>

//--------------------------------------------------------------
void ofApp::setup() {
  ofSetFrameRate(60);

  for (int x = 0; x < 32; x++) {
    for (int y = 0; y < 32; y++) {
      circles[x][y].setup(x, y, (y * 32) + x);
    }
  }
}

//--------------------------------------------------------------
void ofApp::update() {
  for (int x = 0; x < 32; x++) {
    for (int y = 0; y < 32; y++) {
      circles[x][y].update();
    }
  }
}

//--------------------------------------------------------------
void ofApp::draw() {
  for (int x = 0; x < 32; x++) {
    for (int y = 0; y < 32; y++) {
      circles[x][y].draw8();
    }
  }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
