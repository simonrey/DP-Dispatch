/*
 * ServerSide.cpp
 *
 *  Created on: Jan 9, 2017
 *      Author: simon
 */

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

ServerSide::ServerSide() {
	// TODO Auto-generated constructor stub
	len = 0;
	SocketListener = 0;
	SocketDescriptor = 0;

	DefineSocket();
	BindSocket();
	ListenSocket();
	AcceptSocket();

}

ServerSide::~ServerSide() {
	// TODO Auto-generated destructor stub
}

void ServerSide::DefineSocket(){

	if((SocketListener = socket(AF_UNIX, SOCK_STREAM, 0)) == -1){
		perror("Define socket.");
		exit(1);
	}

}

void ServerSide::BindSocket(){

	local.sun_family = AF_UNIX;
	strcpy(local.sun_path, "/home/pi/mysocket");
	len = strlen(local.sun_path) + sizeof(local.sun_family);
	if((bind(SocketListener, (struct sockaddr *)&local, len))==-1){
		perror("bind");
		exit(1);
	}
}

void ServerSide::ListenSocket(){
	if(listen(SocketListener,-1)==-1){
		perror("listen");
		exit(1);
	}
}

void ServerSide::AcceptSocket(){
	len = sizeof(remote);
	if((SocketDescriptor = accept(SocketListener, (struct sockaddr *)&remote, &len)) == -1){
		perror("accept");
		exit(1);
	}
}

void ServerSide::CloseSocket(){
	shutdown(SocketDescriptor,SHUT_RDWR);
}

DisplayObject * ServerSide::ReceiveContent(){
	int InputLength;
	InputLength = recv(SocketDescriptor, &InputBuffer, sizeof(InputBuffer), MSG_WAITALL);
	DisplayObject newObject(InputBuffer, InputLength);
	return &newObject;
}


