#include <iostream>
using namespace std;
int main(){
	int tablica[5];
	int suma = 0;
	int najwieksza = 0;
	cout << "Podaj 5 liczb calkowitych" << endl;
	for (int i = 0; i < 5; i++){
		cout << "Podaj liczbe numer " << (i + 1) << ": ";
		cin >> tablica[i];
		
		if(najwieksza < tablica[i]){
			najwieksza = tablica[i];
		}
		
		suma += tablica[i];
		if(i == 4){
		 cout << "Suma liczb to: " << suma << endl;
		 cout << "Najwieksza liczba to: " << najwieksza << endl;	
		}
	}

}