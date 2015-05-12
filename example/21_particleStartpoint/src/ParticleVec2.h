#pragma once
#include "ofMain.h"

class ParticleVec2 {
public:
    ParticleVec2();
    void update();
    void draw();
    void addForce(ofVec2f force);
    void bounceOffWalls();
    
    
    ofVec2f velocity;//速度
    ofVec2f acceleration;//加速度
    ofVec2f position;//場所
    float mass;//質量
    float radius;// 半径
    float friction;//摩擦
    
};