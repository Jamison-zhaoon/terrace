#include<iostream>
#define PI 3.1415926 
using namespace std;
class Shape {
public:
	virtual double getarea() = 0;
	virtual ~Shape() {}
};

class rectangle :public Shape {
public:
	rectangle(double len, double wid) :a(len), b(wid) {}
	double getarea() {
		return a * b;
	}
private:
	double a, b;
};

class Circle :public Shape {
public:
	double getarea() { return PI * R * R; }
	Circle(double radius) :R(radius) {}
private:
	double R;
};

class square :public rectangle {
public:
	square(double x) :rectangle(x, x), side(x) {}
	double getarea(double area) {
		area = side * side;
		return area;
	}
private:
	double side;
};

int main() {
	double a, b, r, xside;
	cout << "请输入长 宽：" << endl;
	cin >> a >> b;
	cout << "请输入半径：" << endl;
	cin >> r;
	cout << "请输入边长：" << endl;
	cin >> xside;
	Shape* ps;
	ps = new rectangle(a, b);
	cout << "The area of the rectagle is " << ps->getarea() << endl;
	delete ps;
	Shape* pr;
	pr = new Circle(r);
	cout << "The area of the circle is：" << pr->getarea() << endl;
	delete pr;
	Shape* pt;
	pt = new square(xside);
	cout << "The area of the square is：" << pt->getarea() << endl;
}
