#include <iostream>
using namespace std;
class Student{
	private:
		int age;
	public:
		Student() : age(12) {}
		void getAge(){
			cout << "Age = " << age << endl;
		}
};

int main(){
	setlocale(LC_ALL, "Turkish");
	Student *ptr = new Student();
	
	ptr->getAge();
	
	delete ptr;
	
	return 0;
}
