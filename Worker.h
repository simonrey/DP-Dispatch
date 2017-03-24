/*
 * Worker.h
 *
 *  Created on: Jan 10, 2017
 *      Author: simon
 */

#ifndef WORKER_H_
#define WORKER_H_

#include "DisplayObject.h"

class Worker {
public:
	Worker(DisplayObject * ObjectToDisplay);
	virtual ~Worker();


	int TypeShader(DisplayObject * ToDisplay);
	int TypeImage(DisplayObject * ToDisplay);

private:
	DisplayObject * ToDisplay;

};

#endif /* WORKER_H_ */
