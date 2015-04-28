//
//  RandomWalker.h
//  samaaruki
//
//  Created by samatakazuki on 2015/04/28.
//
//
#pragma once
#include "ofMain.h"

class RandomWalker {
public:
    RandomWalker();
    void update();{
        for(int i =0; i < 10; i++);
        
        position.x += ofRandom(-1.0,1.8);
        
        position.y += ofRandom(-1.9,1.0);
        

    if(position.x < 0 ){
        position.x = ofGetWidth();
    }
    if(position.x > ofGetWidth() ){
        position.x = 0;
        
    }
    if(position.y < 0 ){
        position.y = ofGetHeight();
    }
    if(position.y > ofGetHeight() ){
        position.y = 0;
    }
    
    if(position.x < 0 ){
        position.x = position.x+2;
    }
    }

    void draw();
    
    ofVec2f position;
private:
    
};