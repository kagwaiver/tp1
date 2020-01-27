#pragma once
#include "Keeper.h"

class Figure {
protected:
	double *sizes;
	double area;
	int type;
public:
	Figure() 
	{
		cout << "Вызвался конструктор класса Figure" << endl; 
		sizes = new double[3];
		area = 0;
		type = -1;
	}
	virtual ~Figure() 
	{ 
		cout << "Вызвался деструктор класса Figure" << endl; 
		//delete[] sizes;
	}
};

