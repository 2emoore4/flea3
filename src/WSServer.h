//
//  WSServer.h
//  flea3
//
//  Created by Evan Moore on 6/11/14.
//
//

#ifndef __flea3__WSServer__
#define __flea3__WSServer__

#include <iostream>
#include "ofMain.h"
#include "ofxLibwebsockets.h"

class WSServer
{
public:
    bool setup();
    void update();
    void draw();
    
ofxLibwebsockets::Server server;
    
bool bSetup;
    
// websocket methods
void onConnect(ofxLibwebsockets::Event& args);
void onOpen(ofxLibwebsockets::Event& args);
void onClose(ofxLibwebsockets::Event& args);
void onIdle(ofxLibwebsockets::Event& args);
void onMessage(ofxLibwebsockets::Event& args);
void onBroadcast(ofxLibwebsockets::Event& args);
};

#endif /* defined(__flea3__WSServer__) */
