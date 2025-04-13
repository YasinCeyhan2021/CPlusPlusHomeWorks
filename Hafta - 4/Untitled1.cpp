#include <iostream>
#include <string.h>
using namespace std;

class my_class {
	public:
		int my_int; 
		string my_string;
};

class Car {
	public:
		string brand, model;
		int mileage = 0;
		
		void drive(int distance)
		{
			mileage += distance;
		}
		
		void show_data()
		{
			cout << "Brand: " << brand << endl;
			cout << "Model: " << model << endl;
			cout << "Distance driver: " << mileage << " miles" << endl;
		}
};

class main_car{
	public:
		string brand;
		
		void show_brand(){
			cout << "Brand: " << brand << endl;
		}
};
class chiled_car: public main_car{
	public:
		string model;
		
		void show_model(){
			cout << "Model: " << model << endl;
		}
	
};


class Soru1{
	private:
		int sayi;
	public:
		
		void new_number_in(){
			cout << "Bir say� giriniz : ";
			cin >> sayi;
		}
		void new_math(){
			sayi++;
		}
		
		void new_number_out(){
			cout << "Yeni sonu� : " << sayi << endl;
		}
};

class Circle{
	private:
		int yari_cap;
		float alan, cevre;
		const float pi = 3.14;
		
	public:
		
		void new_yari_cap_in(){
			cout << "Yar� �ap� giriniz : ";
			cin >> yari_cap;
		}
	
		void new_alan_out(){
			alan = pi * yari_cap * yari_cap;
			
			cout << yari_cap << " yar� �apl� bir �emberin alan� : " << alan << endl;
		}
		
		void new_cevre_out(){
			cevre = 2 * pi * yari_cap;
			
			cout << yari_cap << " yar� �apl� bir �emberin �evresi : " << cevre << endl;
		}
};

class Rectangle{
	private:
		int uzunluk, genislik;
	public:
		void new_genislik_in(){
			cout << "Dikt�rgenin geni�li�ini giriniz : ";
			cin >> genislik;
		}
		void new_uzunluk_in(){
			cout << "Dikt�rgenin uzunluk giriniz : ";
			cin >> uzunluk;
		}
		void new_hesapla_alan(){
			cout << "Dikt�rtgenin alan� : " << (uzunluk * genislik) << endl;
		}
		void new_hesapla_cevre(){
			cout << "Dikt�rtgenin �evresi : " << (uzunluk * 2 + genislik * 2) << endl;
		}		
		
};


class new_car {
	private:
		string sirket, model;
		int yil;
		
	public:
};

int main(){
	setlocale(LC_ALL, "Turkish");
	string isim = "Yasin Ceyhan";
	
	cout << isim << endl;
	
	
	//------------------------------------------------------
	my_class my_object;
	
	my_object.my_int = 23;
	my_object.my_string = "Yasin Ceyhan";
	
	cout << my_object.my_int << " - " << my_object.my_string << endl;
	
	//------------------------------------------------------
	Car my_car;
	my_car.brand = "Honda";
	my_car.model = "Accord";
	my_car.drive(500000);
	
	my_car.show_data();
	
	
	//------------------------------------------------------
	chiled_car my_new_car;
	
	my_new_car.brand = "Honda";
	my_new_car.model = "Accord";
	
	my_new_car.show_brand();
	my_new_car.show_model();
	
	//------------------------------------------------------
	Soru1 islem;
	
	islem.new_number_in();
	islem.new_math();
	islem.new_number_out();
	
	//------------------------------------------------------
	
	Circle cember;
	
	cember.new_yari_cap_in();
	cember.new_alan_out();
	cember.new_cevre_out();
	
	//-----------------------------------------------------
	
	Rectangle islem2;
	islem2.new_genislik_in();
	islem2.new_uzunluk_in();
	islem2.new_hesapla_alan();
	islem2.new_hesapla_cevre();
	
	//-----------------------------------------------------
	
	return 0;
}
