#include<iostream>
using namespace std;
class point {
public:
	point() {}
	point(int m, int n) :x(m), y(n) {}
	friend point operator+(point& c1, point& c2);
	void display() { cout << "(" << x << "," << y << ")" << endl; }
private:
	int x, y;
};
point operator+(point& c1, point& c2) {
	return point(c1.x + c2.x, c1.y + c2.y);
}
int main() {
	point P1(3, 5), P2(5, 9), P3;
	cout << "P1的值：";
	P1.display();
	cout << "P2的值：";
	P2.display();
	P3 = P1 + P2;
	cout << "P1+P2的值为：";
	P3.display();
	return 0;
}
