#include <iostream>
using namespace std;
// multilevel inhertiance
class Base1{
	public:
		void display(){
			cout << "Base 1 class content" << endl;
		}
};
class Base2{
	public:
		void display(){
			cout << "Base 2 class content" << endl;
		}
};

class Derived : public Base1, public Base2{};


int main(){
	Derived obj;
	obj.Base1::display();
	obj.Base2::display();
	return 0;
}
