#include "Triangle.h"

Triangle::Triangle() {
	cout << "�������� ����������� �� ��������� ������ Triangle" << endl;
	sizes[0] = -1;
	sizes[1] = -1;
	sizes[2] = -1;
	area = 0;
	type = 2;
}

Triangle::Triangle(const Triangle& obj) {
	*this = obj;
}

Triangle::~Triangle() {
	cout << "�������� ���������� ������ Triangle" << endl;
}

Triangle& Triangle::operator=(const Triangle& other) {
	this->sizes = other.sizes;
	this->area = other.area;
	this->type = other.type;
	return *this;
}

ostream& operator<<(ostream& out, Triangle& obj) {
	out << "���: " << obj.type << endl;
	out << "������� 1: " << obj.sizes[0] << endl;
	out << "������� 2: " << obj.sizes[1] << endl;
	out << "������� 3: " << obj.sizes[2] << endl;
	out << "�������: " << obj.area << endl;
	return out;
}

istream& operator>>(istream& in, Triangle& obj) {
	cout << "������� ������� 1: ";
	in >> obj.sizes[0];
	cout << "������� ������� 2: ";
	in >> obj.sizes[1];
	cout << "������� ������� 3: ";
	in >> obj.sizes[2];
	double p = (obj.sizes[0] + obj.sizes[1] + obj.sizes[2]) / 2;
	obj.area = sqrt(p * (p - obj.sizes[0]) * (p - obj.sizes[1]) * (p - obj.sizes[2]));
	return in;
}

ofstream& operator<<(ofstream& fout, Triangle& obj) {
	fout << obj.type << endl;
	fout << obj.sizes[0] << endl;
	fout << obj.sizes[1] << endl;
	fout << obj.sizes[2] << endl;
	fout << obj.area << endl;
	return fout;
}

ifstream& operator>>(ifstream& fin, Triangle& obj) {
	fin >> obj.type;
	fin >> obj.sizes[0];
	fin >> obj.sizes[1];
	fin >> obj.sizes[2];
	fin >> obj.area;
	return fin;
}
