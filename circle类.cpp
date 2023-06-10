#include <iostream>
using namespace std;
const float PI = 3.14159;
class Circle {
public:
	double getArea(double r) { radius = r; return PI * radius * radius; };
private:
	double radius;
};
void main() {
	Circle yuan;
	double r1;
	cout << "请输入圆的半径:";
	cin >> r1;
	cout<<"圆的面积为：" << yuan.getArea(r1);
}