#include "Circle.h"

Circle::Circle() {
	cout << "Вызвался конструктор по умолчанию класса Circle" << endl;
	sizes[0] = -1;
	sizes[1] = -1;
	sizes[2] = -1;
	area = 0;
	type = 0;
}

Circle::Circle(const Circle& obj) {
	*this = obj;
}

Circle::~Circle() {
	cout << "Вызвался деструктор класса Circle" << endl;
}

Circle& Circle::operator=(const Circle& other) {
	this->sizes = other.sizes;
	this->area = other.area;
	this->type = other.type;
	return *this;
}

ostream& operator<<(ostream& out, Circle& obj) {
	out << "Тип: " << obj.type << endl; 
	out << "Радиус: " << obj.sizes[0] << endl;
	out << "Площадь: " << obj.area << endl;
	return out;
}

istream& operator>>(istream& in, Circle& obj){
	cout << "Введите Радиус: ";
	in >> obj.sizes[0];
	obj.area = 3.14 * obj.sizes[0] * obj.sizes[0];
	return in;
}

ofstream& operator<<(ofstream& fout, Circle& obj){
	fout << obj.type << endl;
	fout << obj.sizes[0] << endl;
	fout << obj.area << endl;
	return fout;
}

ifstream& operator>>(ifstream& fin, Circle& obj){
	fin >> obj.type;
	fin >> obj.sizes[0];
	fin >> obj.area;
	return fin;
}
