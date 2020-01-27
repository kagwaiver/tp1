#pragma once
#include "Figure.h"

class Box : public Figure {
public:
	Box();
	Box(const Box& obj);
	~Box();

	Box& operator= (const Box& other);

	friend ostream& operator<<(ostream&, Box&);
	friend istream& operator>>(istream&, Box&);
	friend ofstream& operator<<(ofstream&, Box&);
	friend ifstream& operator>>(ifstream&, Box&);
};