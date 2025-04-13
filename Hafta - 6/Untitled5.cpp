#include <iostream>
using namespace std;
// multilevel inhertiance
class A{
	public:
		void display(){
			cout << "Base class content" << endl;
		}
};


class B: public A{};

class C: public A{}; 

int main(){
	C obj;
	obj.display();
	return 0;
}
