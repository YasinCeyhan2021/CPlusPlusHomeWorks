#include <iostream>
using namespace std;
int asal_mi(int);
int ust_al(int);

int main(){
	int x, i = 0;
	char y;
	
	do{
		i++;
		
		cout << i << ". sayi girin : ";
		cin >> x;
			
		if(x != 0 && asal_mi(x) && asal_mi(ust_al(x) - 1)){
			cout << "\"" << x  << "\" sayisi mersenne sayisi" << endl;
		}else {
			cout << "\"" << x  << "\" sayisi mersenne sayisi degil" << endl;
		}
		
		
		if(asal_mi(x)){
			cout << "\"" << x  << "\" sayisi asal sayi" << endl;
		}else{
			cout << "\"" << x  << "\" sayisi asal sayi degil" << endl;
		}
		
		cout << "2 uzeri " << x << " = " << ust_al(x) << endl;
		
		cout << "Devam etsin mi ? E/e/(?) - Evet H/h/0 - Hayir : ";
		cin >> y;
		
		cout  << endl;
		
		if(y == 'H' || y == 'h' || y == '0')
			break;
		
	}while(1);	

	return 0;
}

int asal_mi(int sayi){
	int i;
	if(sayi < 2)
		return 0;
		
	for(i = 2; i < sayi; i++)
		if(sayi % i == 0)
			return 0;
	
	return 1;
}

int ust_al(int sayi){
	int i;
	int ust_sayi = 1;
	for(i = 1; i <= sayi; i++)
		ust_sayi *=2;

	return ust_sayi;
}
