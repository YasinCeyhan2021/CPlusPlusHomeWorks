#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

class Number{
	public:
		int dizi[10];
		int uznlk = sizeof(dizi) / sizeof(int);
		
		Number(){
			for (int i = 0; i < uznlk; i++) {
				dizi[i] = rand() % 100 + 1; 	
				cout << dizi[i] << " ";
			}
			cout << endl;
		}
};


float ort(Number nm, int uznlk){
	float ort = 0;
	for (int i = 0; i < uznlk; i++) {	
		ort += nm.dizi[i];
	}
	ort /= 10;
	return ort;
}


int main(){
	srand(time(0));
	Number num;
	cout << ort(num, num.uznlk);
	
	return 0;
}
