#include "RandomWalker.h"

RandomWalker::RandomWalker(){
    position.x = ofGetWidth()/2;
    position.y = ofGetHeight()/5;
   // top = ofRandom(1.0);
    bottom = ofRandom(8.0);
    left = ofRandom(8.0);
   // right = ofRandom(1.0);
}

void RandomWalker::draw(){
    position.x += ofRandom(-left);
    position.y += ofRandom(bottom);
    
    
//    if(position.y = position.y-1){
//    size++
//    }
    
    if (position.x < 300) {
        position.x = 300;
    }
 //   if (position.x > ofGetWidth()) {
 //       position.x = 0;
//    }
    if (position.y < 400) {
        position.y = 400;
    }
  //  if (position.y > ofGetHeight()) {
   //     position.y = 0;
  //  }
}