#include <iostream>
#include<vector>
using namespace std;
inline void zhuanzhi(int * m,int a,int b) {
	cout << "转置后的矩阵为:" << endl;
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < a; j++) {
			cout << *(m + j * b + i) << " ";
		}
		cout << endl;
	}
}
int main() {
	cout << "请输入矩阵类型(row,col):";
	int a, b;
	cin >> a >> b;
	int* s = 0;
	cout << "请输入" << a * b << "个数字:" << endl;
	s = new int(a * b);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> *(s+i*b+j);
		}
	}

	cout << "输入的矩阵为:" << endl;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << *(s + i * b + j) << " ";
		}
		cout << endl;
	}
	zhuanzhi(s, a, b);
	return 0;
}