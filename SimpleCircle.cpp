#include <iostream>
using namespace std;
const float PI = 3.1415;
class SimpleCircle {
public:
	SimpleCircle(int radius) { Radius = radius; }
	float zhouchang() {return 2 * PI * Radius; }
	float mianji() { return PI * Radius * Radius; }
	int showr() { return *itsRadius; }
private:
	int Radius;
	int* itsRadius = &Radius;
};
int main() {
	SimpleCircle yuan(3);
	cout << "圆的半径为:" << yuan.showr() << endl;
	cout << "圆的周长为:" << yuan.zhouchang() << endl;
	cout << "圆的面积为:" << yuan.mianji() << endl;
	return 0;
}