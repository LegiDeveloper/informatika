#include <iostream>
using namespace std;
int main(){
	int Liczba;
	string wartosc = "t";
	while(wartosc == "t"){	

	cout << "Podaj liczbe :" << endl;
	cin >> Liczba;
	cout << "Wprowadziles liczbe " << Liczba << endl;
	cout << "Czy dalej chcesz wprowadzac liczby?" << " (t/n) ";
	cin >> wartosc;
	}
	if (wartosc == "n") cout << "Dziekuje za cos tam";
}