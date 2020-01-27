#include "Box.h"

Box::Box() {
	cout << "Вызвался конструктор по умолчанию класса Box" << endl;
	sizes[0] = -1;
	sizes[1] = -1;
	sizes[2] = -1;
	area = 0;
	type = 11;
}

Box::Box(const Box& obj) {
	*this = obj;
}

Box::~Box() {
	cout << "Вызвался деструктор класса Box" << endl;
}

Box& Box::operator=(const Box& other) {
	this->sizes = other.sizes;
	this->area = other.area;
	this->type = other.type;
	return *this;
}

ostream& operator<<(ostream& out, Box& obj) {
	out << "Тип: " << obj.type << endl;
	out << "Сторона 1: " << obj.sizes[0] << endl;
	out << "Сторона 2: " << obj.sizes[1] << endl;
	out << "Сторона 3: " << obj.sizes[2] << endl;
	out << "Объём: " << obj.area << endl;
	return out;
}

istream& operator>>(istream& in, Box& obj) {
	cout << "Введите Сторону 1: ";
	in >> obj.sizes[0];
	cout << "Введите Сторону 2: ";
	in >> obj.sizes[1];
	cout << "Введите Сторону 3: ";
	in >> obj.sizes[2];
	obj.area = obj.sizes[0] * obj.sizes[1] * obj.sizes[2];
	return in;
}

ofstream& operator<<(ofstream& fout, Box& obj) {
	fout << obj.type << endl;
	fout << obj.sizes[0] << endl;
	fout << obj.sizes[1] << endl;
	fout << obj.sizes[2] << endl;
	fout << obj.area << endl;
	return fout;
}

ifstream& operator>>(ifstream& fin, Box& obj) {
	fin >> obj.type;
	fin >> obj.sizes[0];
	fin >> obj.sizes[1];
	fin >> obj.sizes[2];
	fin >> obj.area;
	return fin;
}
