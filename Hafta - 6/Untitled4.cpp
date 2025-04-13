#include <iostream>
using namespace std;
// overriding
class Base{
	public:
		void print(){
			cout << "Base Function" << endl;
		}
};

class Derived : public Base{
	public:
		void print(){
			cout << "Derived Function" << endl;
		}
};


int main(){
	Derived object;
	
	Base *ptrBase = &object;
	Derived *ptrDerived = &object;
	
	ptrBase->print();
	ptrDerived->print();
	return 0;
}
