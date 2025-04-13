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
			//cout << "Derived Function" << endl;
			Base::print();
		}
};


int main(){
	Derived object;
	object.print();	
	// object.Base::print();
	return 0;
}
