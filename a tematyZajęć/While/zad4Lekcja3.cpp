#include <iostream>
using namespace std;
int main(){
	int liczba;
	cout << "Podaj liczbe parzysta ";
	cin >> liczba;
	if (liczba % 2 != 0) cout << "liczba parzysta miala byc" << endl;
	int value;
	value = 2;
	int secondaryVal = 0;
	while (value < liczba){
		value += 2;
		cout << value << endl;
		secondaryVal += 1;
		
	}
	cout << "Ilosc liczb parzystych od 1 do twej liczby wynosi : " << secondaryVal << endl;
	
}