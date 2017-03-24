/*
 * Worker.cpp
 *
 *  Created on: Jan 10, 2017
 *      Author: simon
 */

#include "Worker.h"
#include <string.h>

Worker::Worker(DisplayObject * ObjectToDisplay) {
	// TODO Auto-generated constructor stub

	ToDisplay = ObjectToDisplay;

	if(strcmp(ToDisplay->getObjectType(),"s")==0) TypeShader(ToDisplay);
	if(strcmp(ToDisplay->getObjectType(),"i")==0) TypeImage(ToDisplay);

}

Worker::~Worker() {
	// TODO Auto-generated destructor stub
}


int Worker::TypeShader(DisplayObject * ToDisplay){

	//system(const char * command)



	return 0;
}

int Worker::TypeImage(DisplayObject * ToDisplay){


	return 0;
}
