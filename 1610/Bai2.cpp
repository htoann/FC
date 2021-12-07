#include <iostream>
#include <math.h>
using namespace std;

class Shape {
	public:
	string color;
	virtual void displayArea() = 0;
	virtual void in() {
		cout << "Enter color: ";
		cin >> color;
	}
	virtual void out() {
		cout << "Color: " << color << endl;
	}
};

class Circle: public Shape {
	float radius;

	public:
	void displayArea() {
		cout << "Area of the circle: " << 3.14 * (radius * radius) << endl;
	}
	void in() {
		Shape::in();
		cout << "Enter the radius: ";
		cin >> radius;
	}
};

class Rectangle: public Shape {
	float width, height;

	public:
	void displayArea() {
		cout << "Area of the Rectangle: " << width * height << endl;
	}
	void in() {
		Shape::in();
		cout << "Enter the width, height: ";
		cin >> width >> height;
	}
};

class ArrShape {
	Shape *a[100];
	public:
		void in(int n) {
			int k;
			for (int i = 0; i < n; i++) {
				cout << "1. Circle\n2. Rectangle\n3. Exit\n";
				cin >> k;
				if(k == 1) {
					a[i] = new Circle();
				}
				if(k == 2) {
					a[i] = new Rectangle();
				}
				if(k == 3) {
					break;
				}
				a[i]->in();
			}
		}
		
		void out(int n) {
			for (int i = 0; i < n; i++) {
				a[i]->displayArea();
				if(a[i]->color == "black") {
					a[i]->color = "blue";
				}
				cout << "Color: " << a[i]->color << endl;
			}
		}
		
		
};

int main() {
	ArrShape x;
	x.in(2);
	x.out(2);
}
