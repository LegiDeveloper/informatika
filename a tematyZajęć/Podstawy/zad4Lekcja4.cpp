#include <iostream>
using namespace std;
int main(){
	string Imie = "";
	cout << "Podaj swoje imie: ";
	cin >> Imie;
	int Wiek = 0;
	cout << "Podaj swoj wiek: ";
	cin >> Wiek;
	cout << "Witaj " << Imie << ". Masz " << Wiek << " lat!";
	
	return 0;
}