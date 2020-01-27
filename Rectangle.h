#pragma once
#include "Figure.h"

class Rectangle : public Figure {
public: 
	Rectangle();
	Rectangle(const Rectangle& obj);
	~Rectangle();

	Rectangle& operator= (const Rectangle&other);

	friend ostream& operator<<(ostream&, Rectangle&);
	friend istream& operator>>(istream&, Rectangle&);
	friend ofstream& operator<<(ofstream&, Rectangle&);
	friend ifstream& operator>>(ifstream&, Rectangle&);
};

