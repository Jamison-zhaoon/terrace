#include <iostream>
using namespace std;
class Mammal {
public:
	Mammal() { cout << "mammal构造函数已创造" << endl; }
	~Mammal() { cout << "mammal析构函数已创造" << endl; }
};
class Dog :public Mammal {
public:
	Dog() { cout << "dog构造函数已创造" << endl; }
	~Dog() { cout << "dog析构函数已创造" << endl; }
};
int main() {
	Dog dog;
	return 0;
}