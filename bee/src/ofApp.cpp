#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(25, 25, 25);
    numPoints = 2;
    pos.resize(numPoints);
    col.resize(numPoints);
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = numPoints-1; i > 0; i--) {
        pos[i] = pos[i-1];
        col[i] = col[i-1];
    }
    pos[0] = glm::vec2(mouseX, mouseY);
    col[0] = ofColor::fromHsb(ofRandom(255), 255, 255);
    numPoints = ofGetElapsedTimef();
    pos.resize(numPoints);
    col.resize(numPoints);
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0; i < numPoints-1; i++) {
        ofSetColor(col[i]);
        ofDrawCircle(pos[i], 5);
        ofDrawLine(pos[i], pos[i+1]);
    }
    ofDrawCircle(pos[numPoints-1], 5);
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
