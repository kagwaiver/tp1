#pragma once
#include "Figure.h"

class Ball : public Figure {
public:
	Ball();
	Ball(const Ball& obj);
	~Ball();

	Ball& operator= (const Ball& other);

	friend ostream& operator<<(ostream&, Ball&);
	friend istream& operator>>(istream&, Ball&);
	friend ofstream& operator<<(ofstream&, Ball&);
	friend ifstream& operator>>(ifstream&, Ball&);
};