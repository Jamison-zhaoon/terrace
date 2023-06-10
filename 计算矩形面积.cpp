#include <iostream>
using namespace std;
class Juxing {
public:
	void set(double a, double b);
	double area();
private:
	double length;
	double width;
};
void Juxing::set(double a, double b) {
	length = a;
	width = b;
}
double Juxing::area() { return length * width; }
void main() {
	double l, w;
	Juxing juxing;
	cout << "请输入矩形的长和宽：" << endl;
	cin >> l >> w;
	juxing.set(l, w);
	cout <<"矩形的面积为:" << juxing.area();
}