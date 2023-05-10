

#pragma once


#include "shape.h"

class RightTriangle : public Shape
{
public:
	
	int rotation; 
	RightTriangle(int h, int r, char s, string c);
	virtual void Fill();
	
};

