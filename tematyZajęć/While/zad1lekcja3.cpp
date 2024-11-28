#include <iostream>
using namespace std;
int main(){
	int N;
	cout << "Podaj liczbe calkowita naturalna" << endl;
	cin >> N;
	if(N < 0) cout << "Liczba naturalna miala byc cepie, chyba ze pan to czyta to nie pan to sigma jest" << endl;
	int parzysta;
	parzysta = 2;
	cout << endl;
	cout << parzysta << endl;
	while(parzysta < N){
		
		parzysta += 2;
		
		if(parzysta - 1 == N){
			cout << "nieparzysta jest to nimasz pelnej liczby";
		}
			else cout << parzysta << endl;

		
	}
	
	
}