#pragma once
#include "Figure.h"

class Triangle : public Figure {
public:
	Triangle();
	Triangle(const Triangle& obj);
	~Triangle();

	Triangle& operator= (const Triangle& other);

	friend ostream& operator<<(ostream&, Triangle&);
	friend istream& operator>>(istream&, Triangle&);
	friend ofstream& operator<<(ofstream&, Triangle&);
	friend ifstream& operator>>(ifstream&, Triangle&);
};