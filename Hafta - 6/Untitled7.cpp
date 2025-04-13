#include <iostream>
using namespace std;
// friend
class Distance{
	public:
		Distance() : meter(0) {}
	//private:
		int meter;
		
		friend int addFive(Distance);
		friend Distance add(Distance);	
};

int addFive(Distance d){
	
	d.meter += 5;
	return d.meter;
}


Distance add(Distance d){
	
	d.meter += 10;
	return d;
}

int main(){
	Distance obj1;
	cout << "Distance : " << addFive(obj1) << endl;
	cout << "Obj Distence : " << obj1.meter << endl;
	Distance obj2;
	obj2 = add(obj1);
	
	cout << "Obj Distence : " << obj2.meter << endl;
	return 0;
}
