#include "Keeper.h"
#include "Figure.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Ball.h"
#include "Box.h"
#include "Cylinder.h"
#include "Menu.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	Keeper<Circle> ob1;
	Keeper<Rectangle> ob2;
	Keeper<Triangle> ob3;
	Keeper<Ball> ob4;
	Keeper<Box> ob5;
	Keeper<Cylinder> ob6;

	int menu;
	int flag = 1;
	while (flag) {
		setlocale(LC_ALL, "Russian");
		system("cls");
		cout << "1 - Круг." << endl;
		cout << "2 - Прямоугольник." << endl;
		cout << "3 - Треугольник." << endl;
		cout << "4 - Шар." << endl;
		cout << "5 - Паралелепипед." << endl;
		cout << "6 - Цилиндр." << endl;
		cout << "7 - Выход." << endl;
		cout << "Введите пункт: "; 
		cin >> menu;
		switch (menu) {
		case 1: Menu(ob1, "Circle.txt"); break;
		case 2: Menu(ob2, "Rectangle.txt"); break;
		case 3: Menu(ob3, "Triangle.txt"); break;
		case 4: Menu(ob4, "Ball.txt"); break;
		case 5: Menu(ob5, "Box.txt"); break;
		case 6: Menu(ob6, "Cylinder.txt"); break;
		case 7: flag = 0; break;
		default: cout << "Ошибка" << endl; system("pause"); break;
		}
	}
}