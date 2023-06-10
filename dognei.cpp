#include <iostream>
using namespace std;
class Dog {
public:
	void age(int newYear);
	void weight(float newKg);
private:
	int year;
	float kg;
};
void Dog::age(int newYear) {
	year = newYear;
	cout << "小狗的年龄是" << year << "岁\t";
}
void Dog::weight(float newKg) {
	kg = newKg;
	cout << "体重是" << kg << "千克" << endl;
}
int main() {
	int x;
	float y;
	Dog littleDog;
	cout << "请输入小狗的年龄:";
	cin >> x;
	cout << "请输入小狗体重:";
	cin >> y;
	littleDog.age(x);
	littleDog.weight(y);
	return 0;
}