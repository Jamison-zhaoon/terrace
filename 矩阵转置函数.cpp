#include <iostream>
using namespace std;
void zhuanzhi(int m[3][3]) {
	int temp;
	temp = m[0][1];
	m[0][1] = m[1][0];
	m[1][0] = temp;
	temp = m[0][2];
	m[0][2] = m[2][0];
	m[2][0] = temp;
	temp = m[1][2];
	m[1][2] = m[2][1];
	m[2][1] = temp;
}
int main() {
	int s[3][3];
	cout << "请输入3*3的矩阵" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> s[i][j];
		}
	}
	cout << "输入的矩阵为:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << s[i][j] << " ";
		}
		cout << endl;
	}
	zhuanzhi(s);
	cout << "转置后的矩阵为:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << s[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}