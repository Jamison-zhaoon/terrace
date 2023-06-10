#include <iostream>
#include<string>
using namespace std;
class Employee {
public:
	Employee();
	void setName();
	void setAddress();
	void setCity();
	void setPost();
	void display();
private:
	string name;
	string address;
	string city;
	string post;
};
void Employee::setName() {
	cout << "请输入名字:";
	getline(cin, name);
}
void Employee::setAddress() {
	cout << endl << "请输入地址:";
	getline(cin, address);
}
void Employee::setCity() {
	cout << endl << "请输入城市:";
	getline(cin, city);
}
void Employee::setPost() {
	cout << endl << "请输入邮编:";
	getline(cin, post);
}
void Employee::display() {
	cout << "姓名:" << name << ":" << endl << "城市:" << city << ";" << endl << "地址:" << address << ";" << endl << "邮政编码:" << post;
}
Employee::Employee() {
	setName();
	setAddress();
	setCity();
	setPost();
}
int main() {
	Employee person;
	person;
	person.display();
	return 0;
}