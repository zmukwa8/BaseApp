//
//  BaseApp.cpp
//  BaseApp
//
//  Created by Zephnia Mukwa on 23/04/2013.
//  Copyright (c) 2013 Zephnia Mukwa. All rights reserved.
//

#include "BaseApp.h"
#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
using namespace ci;
using namespace ci::app;
using namespace std;
class BaseApp : public AppBasic {
public:
    ￼  void setup();
    void update();
    void draw();
};
void BaseApp::setup(){}
void BaseApp::update(){}
void BaseApp::draw()
{
    // clear out the window with black
    gl::clear( Color( 0, 0, 0 ) );
}

CINDER_APP_BASIC( BaseApp, RendererGl )