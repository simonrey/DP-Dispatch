/*
 * Dispatch.cpp
 *
 *  Created on: Jan 10, 2017
 *      Author: simon
 */


#include "ServerSide.h"
#include "DisplayObject.h"
#include "Worker.h"

#include <unistd.h>


int main(){



	ServerSide MyServer;
	DisplayObject * ObjectToDisplay;



	ObjectToDisplay = MyServer.ReceiveContent();

	MyServer.CloseSocket();

//	printf(ObjectToDisplay->getObjectType());

//	if(!fork()){
//		//child process
//		Worker DisplayWorker(ObjectToDisplay);
//		}
//	if(fork()){
//		//parent process
//	}


	return 0;
}






