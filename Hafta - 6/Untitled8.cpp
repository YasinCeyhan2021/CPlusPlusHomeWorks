#include <iostream>
using namespace std;

class Student{
	string name;
	int marks;
	public:
		void getName(){
			cin >> name; 
		}
		void getMarks(){
			cin >> marks; 
		}
		void displayInfo(){
			cout << "Name : " << name << endl;
			cout << "marks : " << marks << endl;	
		}
};

int main(){
	Student st[5];
	
	for(int i = 0; i < 5; i++){
		cout << i + 1 << ". ismi giriniz : ";
		st[i].getName();
		cout << i + 1 << ". marks giriniz : ";
		st[i].getMarks();
		
	}
	return 0;
}
