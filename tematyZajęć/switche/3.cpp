#include <iostream>
using namespace std;
int main(){
	char pojazd;
	int IloscGodz;
	char upewnienie;
	cout << "Podaj ilosc godzin " << endl;
	cin >> IloscGodz;
	cout << "Podaj rodzaj pojazdu " << endl;
	cout << "S - samochod, M - motor, A - autobus" << endl;
	cin >> pojazd;
	cout << "Wybrano " << pojazd << " potwierdzasz wybor? Wpisz t lub n" << endl;
	cin >> upewnienie;
	
	if(upewnienie == 't'){
		switch(pojazd){
		case 'S':
		cout << (IloscGodz * 5) << "zl" << endl;
		break;
		case 'A':
		cout << (IloscGodz * 10) << "zl" << endl;
		break;
		case 'M':
		cout << (IloscGodz * 3) << "zl" << endl;
		break;
	}
	}
		

	
	
}