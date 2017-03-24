/*
 * DisplayObject.h
 *
 *  Created on: Jan 9, 2017
 *      Author: simon
 */


#ifndef DISPLAYOBJECT_H_
#define DISPLAYOBJECT_H_

class DisplayObject {
public:
	DisplayObject(char * InputBuffer, int InputLength);
	virtual ~DisplayObject();

	void setObjectType(char * InputBuffer);
	void setData(char * InputBuffer);

	char * getObjectType();

private:
	char ObjectType;
	char * Data;
};

#endif /* DISPLAYOBJECT_H_ */
