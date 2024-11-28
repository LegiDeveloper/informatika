#include <iostream>
using namespace std;
int main(){
	int dzielenie = 0;
	int liczba1 = 0;
	cout << " Podaj pierwsza liczbe: ";
	cin >> liczba1;
	int liczba2 = 0;
	cout << " Podaj druga liczbe: ";
	cin >> liczba2;
	cout << " Suma to: " << liczba1 + liczba2;
	int suma = liczba1 + liczba2;
	dzielenie = liczba1 / liczba2;
	if(suma % 2 == 0){
		cout << " liczba jest parzysta";
	}
		else{
			cout << " liczba jest nieparzysta";
		}
}