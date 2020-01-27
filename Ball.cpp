#include "Ball.h"

Ball::Ball() {
	cout << "�������� ����������� �� ��������� ������ Ball" << endl;
	sizes[0] = -1;
	sizes[1] = -1;
	sizes[2] = -1;
	area = 0;
	type = 10;
}

Ball::Ball(const Ball& obj) {
	*this = obj;
}

Ball::~Ball() {
	cout << "�������� ���������� ������ Ball" << endl;
}

Ball& Ball::operator=(const Ball& other) {
	this->sizes = other.sizes;
	this->area = other.area;
	this->type = other.type;
	return *this;
}

ostream& operator<<(ostream& out, Ball& obj) {
	out << "���: " << obj.type << endl;
	out << "������: " << obj.sizes[0] << endl;
	out << "�����: " << obj.area << endl;
	return out;
}

istream& operator>>(istream& in, Ball& obj) {
	cout << "������� ������: ";
	in >> obj.sizes[0];
	obj.area = 3.14 * obj.sizes[0] * obj.sizes[0] * 4 / 3;
	cout << "area =  " << obj.area << endl;
	return in;
}

ofstream& operator<<(ofstream& fout, Ball& obj) {
	fout << obj.type << endl;
	fout << obj.sizes[0] << endl;
	fout << obj.area << endl;
	return fout;
}

ifstream& operator>>(ifstream& fin, Ball& obj) {
	fin >> obj.type;
	fin >> obj.sizes[0];
	fin >> obj.area;
	return fin;
}
