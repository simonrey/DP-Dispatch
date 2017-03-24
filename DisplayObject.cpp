/*
 * DisplayObject.cpp
 *
 *  Created on: Jan 9, 2017
 *      Author: simon
 */

#include "DisplayObject.h"

DisplayObject::DisplayObject(char * InputBuffer, int InputLength) {
	// TODO Auto-generated constructor stub

	setObjectType(InputBuffer);
	setData(InputBuffer);
}

DisplayObject::~DisplayObject() {
	// TODO Auto-generated destructor stub
}

void DisplayObject::setObjectType(char * InputBuffer){
	ObjectType = InputBuffer[0];
}

void DisplayObject::setData(char * InputBuffer){
	Data = InputBuffer;
}

char * DisplayObject::getObjectType(){
	return &ObjectType;
}

