#include <iostream>
#include<string>
using namespace std;
void reverse(string& s) {
	static string s1;
	int len = s.length(), len1 = s1.length();
	if (len == len1) {
		s = s1;
		return;
	}
	s1 += s.at(len - len1 - 1);
	reverse(s);
}
int main() {
	string str;
	cout << "请输入一段字符:" << endl;
	getline(cin, str);
	cout << "你输入的原字符串为:" << str << endl;
	reverse(str);
	cout << "倒序后为:" << str << endl;
	return 0;
	}