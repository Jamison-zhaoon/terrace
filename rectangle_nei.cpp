#include <iostream>
using namespace std;
/*-------------Point-----------------*/
class Point {
public:
	Point(int xx, int yy) {
		x = xx;
		y = yy;
	}
	Point(Point& p);
	int getx() { return x; }
	int gety() { return y; }
private:
	int x, y;
};
Point::Point(Point& p) {
	x = p.x;
	y = p.y;
}
/*----------------Area--------------*/
class Area {
public:
	Area(Point xp1,Point xp2);
	Area(Area& a);
	float getarea() { return area; }
private:
	Point p11, p22;
	float area;
};
Area::Area(Point xp1, Point xp2) :p11(xp1), p22(xp2) {
	float x = static_cast<float>(p11.getx() - p22.getx());
	float y = static_cast<float>(p11.gety() - p22.gety());
	area = abs(x * y);
};
Area::Area(Area& a) :p11(a.p11), p22(a.p22) {
	area = a.area;
}

int main() {
	Point p1(1, 5), p2(-2, 1);
	Area area(p1, p2);
	cout << "坐标为（1，5）和（-2，1）所围成的矩形面积是:";
	cout << area.getarea() << endl;
}