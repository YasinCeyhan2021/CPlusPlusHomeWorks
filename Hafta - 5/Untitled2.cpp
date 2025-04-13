#include <iostream>
using namespace std;

class Person{
	private:
		int age;
	public:
		Person(){
			age = 25;
		}
		Person(int a){
			age = a;
		}
		int getAge(){
			return age;
		}
};

int main(){
	setlocale(LC_ALL, "Turkish");
	Person person1;
	Person person2(40);
	
	
	cout << "Person 1 Age : " << person1.getAge() << endl;
	cout << "Person 2 Age : " << person2.getAge() << endl;
	
	return 0;
		
}
