#include <iostream>
using namespace std;
int main(){
		int N;
	cout << "Podaj liczbe calkowita naturalna" << endl;
	cin >> N;
	if(N < 0) cout << "Liczba naturalna miala byc cepie, chyba ze pan to czyta to nie pan to sigma jest" << endl;
	int liczba;
	liczba = 1;
	cout << endl;
	int sum = liczba;
	while (liczba < N){
		
		liczba += 1;
		sum += liczba;
		
	}
	cout << sum;
}


