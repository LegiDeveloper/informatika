#include <iostream>
using namespace std;
int main(){
	
	int tablica[3][3];
	for(int i = 0; i <= 2; i++){
		cout << "i" << i << endl;
		for(int j = 0; j <= 2; j++){
			cout << "j" << j << endl;
		cout << "Podaj liczbe dla wiersza " << i + 1 << " kolumny " << j + 1 << "\n";
		cin >> tablica[i][j];
		cout << "podana liczba to: " << tablica[i][j] << "\n";
			
		}

	}	
	
	
	

}