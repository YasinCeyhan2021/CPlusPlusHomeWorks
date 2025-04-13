#include <iostream>
using namespace std;

class Student{
	public:
		double marks;
		
		Student(double a){
			marks = a;
		}
};

void calculateAverage(Student s1, Student s2){
	double average = (s1.marks + s2.marks) /2;
	
	cout << "Average marks : " << average << endl;
}

int main(){
	setlocale(LC_ALL, "Turkish");
	
	Student student1(88.0), student2(56.0);
	
	calculateAverage(student1, student2);
	
	return 0;
}
