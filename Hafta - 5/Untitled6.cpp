#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Turkish");
	int *pointInt;
	float *pointFloat;
	
	pointInt = new int;
	pointFloat = new float;
	
	*pointInt = 45;
	*pointFloat = 45.45;
	
	
	cout << *pointInt << endl;
	cout << *pointFloat << endl;
	
	delete pointInt;
	delete pointFloat;
	
	return 0;
}
