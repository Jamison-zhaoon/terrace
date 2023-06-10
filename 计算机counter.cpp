#include<iostream>
using namespace std;
class counter {
public:
	counter() {}
	counter(int p) {
		i = p;
	}
	int geti() {
		return i;
	}
	void seti(int p) {
		i = p;
	}
	counter operator+(counter& r);
private:
	int i;
};
counter counter::operator+(counter& r) {
	return counter(i + r.geti());
}
int main() {
	counter a(10), b(20), c;
	c = a + b;
	cout << "10+20="<<c.geti() << endl;
	return 0;
}
