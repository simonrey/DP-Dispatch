/*
 * ServerSide.h
 *
 *  Created on: Jan 9, 2017
 *      Author: simon
 */


#ifndef SERVERSIDE_H_
#define SERVERSIDE_H_

#include "ServerSide.h"
#include "DisplayObject.h"

#include <sys/socket.h>
#include <sys/types.h>
#include <sys/un.h>
#include <errno.h>
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

class ServerSide {
public:
	//Constructor and Destructor
	ServerSide();
	~ServerSide();

	//Functions
	void DefineSocket();
	void BindSocket();
	void ListenSocket();
	void AcceptSocket();
	void CloseSocket();
	DisplayObject * ReceiveContent();


	//Access
	unsigned int getSocketListener();
	unsigned int getSocketIncoming();

private:
	int SocketListener;
	int SocketDescriptor;
	struct sockaddr_un local, remote;
	socklen_t len;
	char InputBuffer[1024];
};

#endif /* SERVERSIDE_H_ */
