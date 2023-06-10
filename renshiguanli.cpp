#include <iostream>
using namespace std;
/*------------------------date-----------------------------*/
class Date {
public:
	Date() {};
	Date(const Date& date) {
		yearmonthday = date.yearmonthday;
	}
	void setdate(string d);
	void showdate();
	string gety() { return yearmonthday; }

private:
	string yearmonthday ;
};
void Date::setdate(string d){
	yearmonthday = d;
}
void Date::showdate() {
	cout << yearmonthday;
}
/*------------------------------renyuan---------------------------------------*/
class Renyuan {
public:
	Renyuan() {};
	Renyuan(const Renyuan& r);
	void showrenyuan();
	void setrenyuan(string newN = "114514", string newS = "M", string newI = "42201920030101221X", string newB = "20030101");
	~Renyuan() {};
private:
	string num ;
	string sex ;
	Date borndate;
	string id ;
};
void Renyuan::setrenyuan(string newN, string newS, string newI,string newB) {
	num = newN;
	sex = newS;
	id = newI;
	borndate.setdate(newB);
}
inline void Renyuan::showrenyuan() {
	cout << "编号:" << num << endl << "性别:" << sex <<endl<<"出生日期:";
	borndate.showdate();
	cout<< endl << "身份证号为:" << id;
}
Renyuan::Renyuan(const Renyuan& r) {
	num = r.num;
	sex = r.sex;
	id = r.id;
}
int main() {
	int  x;
	string a, c, d;
	string b;
	Renyuan p;
	p.setrenyuan();
	xunwen:
	cout << "请选择模式并输入数字代码" << endl << "0.人员录入   1.人员显示" << endl;
	cin >> x;
	if (x==0) {
		cout << "请输入工作人员的编号:";
		cin>>a;
		cout << "性别:";
		cin >> c;
		cout<<"出生日期:";
		cin >> b;
		cout << "身份证号:";
		cin >> d;
		p.setrenyuan(a,c,d,b);
		goto xunwen;
			}
	else if (x == 1) {
		p.showrenyuan();
	}
	return 0;
}