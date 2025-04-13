#include <iostream>
// using namespace std;

int main(){
	int ftemp; // Tanýmlama
	std :: cout << "In fahrenheit : "; // Çýktý
	std :: cin >> ftemp; // kullanýcýdan veri almak
	int ctemp = (ftemp - 32) * 5 / 9; // fahrenheit to celsius
	std :: cout << "Celsius is : " << ctemp << "\n"; // Çýktý
	if(ctemp >= 100){ // ctemp, 100 den büyük eþit mi ? 
		std :: cout << "Kaynar"; // Çýktý
	}else{
		std :: cout << "Kaynar degil"; // Çýktý
	}
	
	return 0;
}
