#include "Rectangle.h"

Rectangle::Rectangle() {
	cout << "Вызвался конструктор по умолчанию класса Rectangle" << endl;
	sizes[0] = -1;
	sizes[1] = -1;
	sizes[2] = -1;
	area = 0;
	type = 1;
}

Rectangle::Rectangle(const Rectangle& obj) {
	*this = obj;
}

Rectangle::~Rectangle() {
	cout << "Вызвался деструктор класса Rectangle" << endl;
}

Rectangle& Rectangle::operator=(const Rectangle& other) {
	this->sizes = other.sizes;
	this->area = other.area;
	this->type = other.type;
	return *this;
}

ostream& operator<<(ostream& out, Rectangle& obj) {
	out << "Тип: " << obj.type << endl;
	out << "Сторона 1: " << obj.sizes[0] << endl;
	out << "Сторона 2: " << obj.sizes[1] << endl;
	out << "Площадь: " << obj.area << endl;
	return out;
}

istream& operator>>(istream& in, Rectangle& obj) {
	cout << "Введите Сторону 1: ";
	in >> obj.sizes[0];
	cout << "Введите Сторону 2: ";
	in >> obj.sizes[1];
	obj.area = obj.sizes[0] * obj.sizes[1];
	return in;
}

ofstream& operator<<(ofstream& fout, Rectangle& obj) {
	fout << obj.type << endl;
	fout << obj.sizes[0] << endl;
	fout << obj.sizes[1] << endl;
	fout << obj.area << endl;
	return fout;
}

ifstream& operator>>(ifstream& fin, Rectangle& obj) {
	fin >> obj.type;
	fin >> obj.sizes[0];
	fin >> obj.sizes[1];
	fin >> obj.area;
	return fin;
}
