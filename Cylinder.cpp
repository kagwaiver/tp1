#include "Cylinder.h"

Cylinder::Cylinder() {
	cout << "�������� ����������� �� ��������� ������ Cylinder" << endl;
	sizes[0] = -1;
	sizes[1] = -1;
	sizes[2] = -1;
	area = 0;
	type = 12;
}

Cylinder::Cylinder(const Cylinder& obj) {
	*this = obj;
}

Cylinder::~Cylinder() {
	cout << "�������� ���������� ������ Cylinder" << endl;
}

Cylinder& Cylinder::operator=(const Cylinder& other) {
	this->sizes = other.sizes;
	this->area = other.area;
	this->type = other.type;
	return *this;
}

ostream& operator<<(ostream& out, Cylinder& obj) {
	out << "���: " << obj.type << endl;
	out << "������: " << obj.sizes[0] << endl;
	out << "������: " << obj.sizes[1] << endl;
	out << "�����: " << obj.area << endl;
	return out;
}

istream& operator>>(istream& in, Cylinder& obj) {
	cout << "������� ������: ";
	in >> obj.sizes[0];
	cout << "������� ������: ";
	in >> obj.sizes[1];
	obj.area = 3.14 * obj.sizes[0] * obj.sizes[0] * obj.sizes[1];
	return in;
}

ofstream& operator<<(ofstream& fout, Cylinder& obj) {
	fout << obj.type << endl;
	fout << obj.sizes[0] << endl;
	fout << obj.sizes[1] << endl;
	fout << obj.area << endl;
	return fout;
}

ifstream& operator>>(ifstream& fin, Cylinder& obj) {
	fin >> obj.type;
	fin >> obj.sizes[0];
	fin >> obj.sizes[1];
	fin >> obj.sizes[2];
	fin >> obj.area;
	return fin;
}
