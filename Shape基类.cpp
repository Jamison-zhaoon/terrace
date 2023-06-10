#include <iostream>
using namespace std;
const float PI = 3.14f;
class Shape {
public:
	Shape();
	virtual float getArea();
};
class Rectangle: virtual Shape {
public:
	Rectangle();
	Rectangle(float l, float w) :length(l), width(w) {};
	float getArea();
private:
	float length;
	float width;
};
float Rectangle::getArea() { return length * width; }
class Circle : virtual Shape {
public:
	Circle(int r) :radius(r) {};
	float getArea();
private:
	float radius;
};
float Circle::getArea() { return PI * radius * radius; }
class Square :public Rectangle {
public:
	Square(float s) { side = s; }
	float getArea() { return  side * side; }
private:
	float side;
};

int main() {
	Circle c(3);
	cout << "半径为3的圆的面积为:" << c.getArea() << endl;
	Rectangle r(2, 4);
	cout << "长为2，宽为4的矩形的面积为:" << r.getArea() << endl;
	Square s(3);
	cout << s.getArea();
	return 0;
}
