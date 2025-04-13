#include <iostream>
using namespace std;

class Base{
	private:
		int pvt = 1;
	protected:
		int prot = 2;
	public:
		int pub = 3;
		
		int getPVT(){
			return pvt;
		}
};

class ProtectedDerived : private Base{
	public:
		int getProt(){
			return prot;
		}
		int getPub(){
			return pub;
		}
};


int main(){
	ProtectedDerived object;
	cout << "Private cannot be accessed." << endl;
	cout << "Protected = " << object.getProt() << endl;
	cout << "Public = " << object.getPub() << endl;
	
	return 0;
}
