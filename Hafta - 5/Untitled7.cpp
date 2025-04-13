#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Turkish");
	int num;
	float *ptr;
	cout<< "Dizi Uzunluðu : ";
	cin >> num;
	
	ptr = new float(num);
	
	
	
	cout <<"Enter OPA of students." << endl;
	for(int i = 0; i < num; i++){
		cout << "Student " << (i + 1) << " : ";
		cin >> *(ptr + i);
	}
	
	cout << "\nDispalying OPA of student." << endl;
	for(int i = 0; i < num; i++){
		cout << "Student " << (i + 1) << " : " << *(ptr + i) << endl;
	}
	
	delete[] ptr;
	
	return 0;
}
