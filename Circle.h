#pragma once
#include "Figure.h"

class Circle : public Figure {
public:
	Circle();
	Circle(const Circle& obj);
	~Circle();

	Circle& operator= (const Circle& other);

	friend ostream& operator<<(ostream&, Circle&);
	friend istream& operator>>(istream&, Circle&);
	friend ofstream& operator<<(ofstream&, Circle&);
	friend ifstream& operator>>(ifstream&, Circle&);
};