#include <iostream>
using namespace std;
class Student {
	public:
		double marks1, marks2;
};


Student createStudent(){
	Student student1;
	
	student1.marks1 = 88.0;
	student1.marks2 = 44.0;
	
	cout << "(F) Marks 1 : " << student1.marks1 << endl;
	cout << "(F) Marks 2 : " << student1.marks2 << endl;
	
	return student1;
}

int main(){
	setlocale(LC_ALL, "Turkish");
	
	Student st;
	
	st = createStudent();
	
	cout << "(M) Marks 1 : " << st.marks1 << endl;
	cout << "(M) Marks 2 : " << st.marks2 << endl;
	
	
	// fonksiyona 10 elemanlı bir dizi gönder 1 - 100 arası rastgele sayılar fonksiyon ort versin
	
	
	return 0;
}
