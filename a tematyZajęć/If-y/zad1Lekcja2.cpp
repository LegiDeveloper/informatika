#include <iostream>
using namespace std;
int main(){
	int wynik;
	cin >> wynik;
	if ((wynik >= 0) && (wynik <= 100)) {
		
	if(wynik < 50) cout << "pale masz, nie zdajesz i latwo ";
	else if(wynik < 70) cout << "dwa masz, zdajesz ciesz sie ";
	else if(wynik < 85) cout << "cztery masz to moze zdasz ";
	else if(wynik < 99) cout << "pionbtekczka brawo grathulujew !!!@!111 ";
	else if(wynik == 100) cout << "kujonie zakuty trawy dotknij ";
	} else {
		cout << "Liczba nie miesci sie w zakresie";
	}

}