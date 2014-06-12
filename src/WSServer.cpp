//
//  WSServer.cpp
//  flea3
//
//  Created by Evan Moore on 6/11/14.
//
//

#include "WSServer.h"

bool WSServer::setup()
{
    ofxLibwebsockets::ServerOptions options = ofxLibwebsockets::defaultServerOptions();
    options.port = 9092;
    options.bUseSSL = false;
    bSetup = server.setup(options);
    
    server.addListener(this);

    return bSetup;
}

void WSServer::update()
{

}

void WSServer::draw()
{

}

void WSServer::onConnect(ofxLibwebsockets::Event& args)
{
    cout<<"on connected"<<endl;
}

void WSServer::onOpen(ofxLibwebsockets::Event& args)
{
    cout<<"new connection open"<<endl;
}

void WSServer::onClose(ofxLibwebsockets::Event& args)
{
    cout<<"on close"<<endl;
}

void WSServer::onIdle(ofxLibwebsockets::Event& args)
{
    cout<<"on idle"<<endl;
}

void WSServer::onMessage(ofxLibwebsockets::Event& args)
{
    cout<<"got message "<<args.message<<endl;
    args.conn.send(args.message);
}

void WSServer::onBroadcast(ofxLibwebsockets::Event& args)
{
    cout<<"got broadcast "<<args.message<<endl;
}
