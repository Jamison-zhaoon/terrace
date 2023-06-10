#include <iostream>
using namespace std;
class Tree {
public:
	int grow(int years) { ages += years; return ages; }
	int age() { return ages; }
private:
	int ages=13;
};
void main() {
	int y;
	Tree tree;
	cout << "这是一颗树:" << endl<<endl;
	cout << "    (*******)" << endl;
	cout << "  (%%%%%%%%%%%)" << endl;
	cout << "(%%%%%%%%%%%%%%%)" << endl;
	cout << "  (%%%%%%%%%%%%)                 /////" << endl;
	cout << "     /%%%%%%\\               //////////" << endl;
	cout << "      ;;;;;               ////////////" << endl;
	cout << "      ;;;;;            ////////////" << endl;
	cout << "      ;;;;;            ///////" << endl;
	cout << "      ;;;;;         /////" << endl;
	cout << "      ;;;;;      ////" << endl;
	cout << "      ;;;;;  " << endl;
	cout << " ~~~`````````~~~" << endl;
	cout << " ~~~~~~~~~~~~~~~" << endl;
	cout << "大树的树龄为" << tree.age() << endl;
	cout << "输入数字让大树成长：";
	cin >> y;
	cout << "大树现在的树龄为:" << tree.grow(y);
}