#include <iostream>
using namespace std;
int main(){
	int suma = 0;
	int tablica[3][3];
	for(int i = 0; i <= 2; i++){
		cout << "numer petli i: " << i << endl;
		for(int j = 0; j <= 2; j++){
		cout << "numer petli j: " << j << endl;
		cout << "Podaj liczbe dla wiersza " << i + 1 << " kolumny " << j + 1 << "\n";
		cin >> tablica[i][j];
		suma += tablica[i][j];
		}
	}	
	cout << "Suma liczb to: " << suma << "\n";
	cout << "Srednia liczb to: " << (suma /9) << "\n";
	
	

}