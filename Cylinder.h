#pragma once
#include "Figure.h"

class Cylinder : public Figure {
public:
	Cylinder();
	Cylinder(const Cylinder& obj);
	~Cylinder();

	Cylinder& operator= (const Cylinder& other);

	friend ostream& operator<<(ostream&, Cylinder&);
	friend istream& operator>>(istream&, Cylinder&);
	friend ofstream& operator<<(ofstream&, Cylinder&);
	friend ifstream& operator>>(ifstream&, Cylinder&);
};