#include <iostream>
using namespace std;
int main(){
	int tablica[5];
	int sumaParzysta = 0;
	cout << "Podaj 5 liczb calkowitych" << endl;
	for (int i = 0; i < 5; i++){
		cout << "Podaj liczbe numer " << (i + 1) << ": ";
		cin >> tablica[i];

		if(i == 4){
	
		}
	}
		cout << "Liczby parzyste to: " << endl;
		for(int j = 0; j < 5; j++){
			if(tablica[j] % 2 == 0){
			cout << " " << tablica[j];
			sumaParzysta += tablica[j];
			}
		
		}
		cout << "     --- Suma liczb parystych to: " << sumaParzysta << " ---" << endl;
}