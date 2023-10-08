#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(25, 25, 25);
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 19; i > 0; i--) {
        points[i] = points[i-1];
    }
    points[0].set(mouseX, mouseY);
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0; i < 20; i++) {
        ofDrawCircle(points[i], 5);
    }
    for(int i = 0; i < 19; i++) {
        ofDrawLine(points[i], points[i+1]);
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
