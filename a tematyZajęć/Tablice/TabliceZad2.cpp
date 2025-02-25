#include <iostream>
using namespace std;
int main(){
	int tablica[5];
	int liczba = 0;
	cout << "Podaj 5 liczb:" << endl;
	for(int i = 0; i < 5; i ++){
		cout << "Podaj liczbe numer: " << (i + 1) << " ";
		cin >> liczba;
		if(liczba < 0){
			tablica[i] = 0;
		} else{
			tablica[i] = liczba;
		}
	}
		cout << "Liczby to:" << endl; 
	for(int i = 0; i < 5; i++){
		cout << " " << tablica[i];
	}
}