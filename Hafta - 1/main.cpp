#include <iostream>
// using namespace std;

int main(){
	int ftemp; // Tan�mlama
	std :: cout << "In fahrenheit : "; // ��kt�
	std :: cin >> ftemp; // kullan�c�dan veri almak
	int ctemp = (ftemp - 32) * 5 / 9; // fahrenheit to celsius
	std :: cout << "Celsius is : " << ctemp << "\n"; // ��kt�
	if(ctemp >= 100){ // ctemp, 100 den b�y�k e�it mi ? 
		std :: cout << "Kaynar"; // ��kt�
	}else{
		std :: cout << "Kaynar degil"; // ��kt�
	}
	
	return 0;
}
