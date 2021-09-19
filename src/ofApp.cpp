#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  radius = 30;


}

//--------------------------------------------------------------
void ofApp::update(){

}

void setRandomColor(){
  int maxRgb = 256;
  int r = rand() % maxRgb;
  int g = rand() % maxRgb;
  int b = rand() % maxRgb;

  ofSetColor(r, g, b);
}

//--------------------------------------------------------------
void ofApp::draw(){
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
        int xPos = radius + (2 * x * (radius + 1));
        int yPos = radius + (2 * y * (radius + 1));

        setRandomColor();
        ofDrawCircle(xPos, yPos, radius);
    }
  }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
