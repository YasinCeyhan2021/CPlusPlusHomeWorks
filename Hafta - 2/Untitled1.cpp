#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	// t�rk�e karakterleri kullanabilmek i�in
	setlocale(LC_ALL, "Turkish"); 
	// �al���r
	
	/*
	int x = 5;
	{
		cout << x << endl;
	}
	

	{
		int y = x;
	}
	*/
	
	// �al��maz
	// cout << y << endl;
	
	// ---------------------------------------------------------------------------------------------
	
	/*
	int y = 22, c = 0;
	if("yasin" == "yasin"){
		cout << "kosul calisti" << "\t 0 == 0 ? " << (0 == 0) << "\t 1 == 1 ? " << (1 == 1) << endl << "y = " << y << "\t c = " << c << endl << "y == c ? " << (y == c);
		cout << "\t y != c ? " << (y != c) << "\t y < c ?" << (y < c) << endl;
	}
	cout << "yasin == yasin ? " << ("yasin" == "yasin") << "\t yasin == ceyhan ? " << ("yasin" == "ceyhan") << endl;
	*/
	
	// ---------------------------------------------------------------------------------------------
	
	/*
	int ch_count = 0;
	int wd_count = 0;
	char ch;
	
	while((ch=getche()) != '\r'){
		if(ch == ' ')
			wd_count++;
			
		ch_count++;
	}
	
	cout << "Word = " << wd_count << endl
		 << "Letters = " << ch_count << endl;
		 */
		 
	// ---------------------------------------------------------------------------------------------
	
	int ch_count = 0;
	int wd_count = 0;
	int B_count = 0;
	int k_count = 0;
	int r_count = 0;
	int o_count = 0;
	int i = 0;
	char dizi[1000]{};
	char ch;
	
	while((ch=getche()) != '\r'){
		if(ch >= 'a' && ch <= 'z')
			k_count++;
		else if(ch >= 'A' && ch <= 'Z')
			B_count++;
		else if(ch >= '0' && ch <= '9')
			r_count++;
		else if(ch == ' ')
			wd_count++;
		else
			o_count++;
			
		// cout << (ch_count + 1) << ". -" << ch << "-" << endl;
			
		dizi[ch_count] = ch;
			
		ch_count++;
	}
	
	dizi[ch_count] = '\0';
	
	cout << "Girilen karakter sayisi = " << ch_count << endl
		 << "Girilen bosluk karakteri sayisi = " << wd_count << endl
		 << "Girilen buyuk karakter sayisi = " << B_count << endl
		 << "Girilen kucuk karakter sayisi = " << k_count << endl
		 << "Girilen rakam sayisi = " << r_count << endl
		 << "Girilen ozel karakter sayisi = " << o_count << endl;
		 
	while(dizi[i++] != '\0') cout << i << ". -" << dizi[i - 1] << "-" << endl;
	
	cout << "i = " << i << endl;
	
	int id;
	if(id) cout << "id de�i�keni 0 dan farkl�d�r.";
	if(!id) cout << "id de�i�keni 0 a e�ittir.";
	cout << "Bir int de�erin, giriniz : ";
	cin >> id;
	if(id > 100){
		cout << "Girilen say� 100 den b�y�kt�r1" << "\n";
	}
	
	
	
	
	
	
	return 0;
}
