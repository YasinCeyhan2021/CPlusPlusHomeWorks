#include <iostream>
#include <string.h>
using namespace std;

double sqrt(const double x){
	// x += 0.3; sabit
	return x;
}
int fac(int x){
	return (x > 1) ? x * fac(x - 1): 1; 
}

int kare_al(int x){
	return x*x; 
}

void fonk(char *cp1, char *cp2){
	cout << "-" << cp1 << "-" << endl;
	while(*cp1) cout << "*" << *cp1++ << "*" << endl;
	if(*cp2){
		if(*cp2 != 'x') *cp1++ = *cp2;
		*cp2++;

		fonk(cp1, cp2);
	}
	else *cp1 = '\0';
}
int tp(int x){
	if(x > 1) return x + tp(x - 1);
	
	return 1;
	// 	return (x > 1) ? x + tp(x - 1): 1; 
}
void my_cpy(char *cp1, char *cp2){
	while(*cp2) *cp1++ = *cp2++;
	*cp1 = '\0';
}

int my_cmp(char *cp1, char *cp2){
	
	cout << "-" << *cp1 << "-" << " -" << *cp2 << "-" << endl;
	cout << "-" << int(*cp1) << "-" << " -" << int(*cp2) << "-" << endl;
	
	if(*cp1 < *cp2) return -1;
	else if(*cp1 > *cp2) return 1;
	else if(*cp1 == '\0') return 0;
	
	return my_cmp(++cp1, ++cp2);
}

void reverse(string str){
	if(str.size() == 0) return;
	
	cout << str.substr(0) << endl;
	reverse(str.substr(1));
	cout << endl << "" << endl << str[0];
	cout << endl << "" << endl << str;
}


int main(){
	setlocale(LC_ALL, "Turkish");
	double s2 = sqrt(0.2);
	int x = kare_al(5);
	int y = fac(3);
	cout << s2 << " " << x << " " << y << endl;

	char dizi[50] = "Yasin ";
	
	fonk(dizi, "Ceyxhxaxn");
	cout << dizi;
	
	int toplam = tp(100);
	cout << endl << toplam << " " << 50*101;
	
	char dizi2[50], dizi3[50];
	my_cpy(dizi2, "Bilgi saymak");
	my_cpy(dizi3, "yczqewýfýewfýwj");
	cout << endl << "-" << dizi2 << "-";
	
	cout << endl;
	
	int id = my_cmp(dizi2, dizi3);
	if(id == 0) cout << "Ýki dizi birbirine eþit!";
	else if(id > 0) cout << "Ýlk dizi ikinci diziden büyüktür";
	else cout <<  "Ýlk dizi ikinci diziden küçüktür";
	
	cout << endl;
	
	reverse("yasin");
	
	return 0;
}
