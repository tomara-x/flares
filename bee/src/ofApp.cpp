#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(25, 25, 25);
    numPoints = 2;
    points.resize(numPoints);
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = numPoints-1; i > 0; i--) {
        points[i] = points[i-1];
    }
    points[0] = ofVec2f(mouseX, mouseY);
    numPoints = ofGetElapsedTimef();
    points.resize(numPoints);
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0; i < numPoints-1; i++) {
        ofColor c = ofColor::fromHsb(ofRandom(255), 255, 255);
        ofSetColor(c);
        ofDrawCircle(points[i], 5);
        ofDrawLine(points[i], points[i+1]);
    }
    ofDrawCircle(points[numPoints-1], 5);
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
