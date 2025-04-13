#include <iostream>
using namespace std;


int main(){
	setlocale(LC_ALL, "Turkish");
	
	float arr[5];

	
	for(int i = 0; i < 5; i++){
		cout << "Double sayý gir : ";
		cin >> *(arr + i);
		
	}
	
	cout << "Displaying Data: " << endl;
	
	for(int i = 0; i < 5; i++){
		cout << "*(arr + " << i << ") = " << *(arr + i) << endl;
	}
	
	
	return 0;
}
