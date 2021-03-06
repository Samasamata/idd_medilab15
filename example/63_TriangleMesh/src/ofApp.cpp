#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // 画面の設定
    ofBackground(0);
    ofEnableDepthTest();

    cam.setDistance(100);
        
    // メッシュの幅と高さ
    w = 200;
    h = 200;
    
    plane = ofPlanePrimitive(400,400,20,20);
    
   // mesh = plane.getMesh();
   // createMesh();
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    mesh
    
    for(int y = 1; y + 1 < ySteps; y++) {
        for(int x = 1; x + 1 < xSteps; x++) {
            // x, y に該当する頂点番号を計算
            int i = y * xSteps + x;
            
            // 波を生成しZ座標に
            float wx = sin(x * 0.1 + ofGetElapsedTimef()) * 10.0;
            float wy = sin(y * 0.12 + ofGetElapsedTimef()) * 10.0;
            float wz = wx + wy;
            ofVec3f position(x * stepSize, y * stepSize, wz);
            
            // 頂点の位置を設定
            mesh.setVertex(i, position);
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    // メッシュの描画
    ofSetHexColor(0xffffff);
    cam.begin(); // カメラ開始
    
    // 頂点の位置をドットで表示
    ofTranslate(-w / 2, -h / 2);
   // mesh.drawWireframe();
    plane.drawWireframe();
    cam.end(); // カメラ終了
    
    // ログの表示
    string info;
    info = "Vertex num = " + ofToString(w * h, 0) + "\n";
    info += "FPS = " + ofToString(ofGetFrameRate(), 2);
    ofDrawBitmapString(info, 30, 30);
}

void ofApp::createMesh(){
    mesh.setMode(OF_PRIMITIVE_TRIANGLES);
    stepSize = 2;
    ySteps = w / stepSize;
    xSteps = h / stepSize;
    for(int y = 0; y < ySteps; y++) {
        for(int x = 0; x < xSteps; x++) {
            mesh.addVertex(ofVec2f(x * stepSize, y * stepSize));
            mesh.addTexCoord(ofVec2f(x * stepSize, y * stepSize));
        }
    }
    for(int y = 0; y + 1 < ySteps; y++) {
        for(int x = 0; x + 1 < xSteps; x++) {
            int nw = y * xSteps + x;
            int ne = nw + 1;
            int sw = nw + xSteps;
            int se = sw + 1;
            mesh.addIndex(nw);
            mesh.addIndex(ne);
            mesh.addIndex(se);
            mesh.addIndex(nw);
            mesh.addIndex(se);
            mesh.addIndex(sw);
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    // fキーでフルスクリーン表示
    if (key == 'f') {
        ofToggleFullscreen();
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    
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
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}