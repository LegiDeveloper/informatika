#include <iostream>
using namespace std;
int main(){
cout << "Podaj swoj wiek: " << endl;
int wiek;
cin >> wiek;
if((wiek > 120) or (wiek < 0)){
	cout << "Nieprawidlowy wiek (sorki jak masz 130 lat i zyjesz ale chyba nie)";
	return 0;
} 
if((wiek >= 0) and (wiek <= 12)) cout << "Masz " << wiek << " lat, wiec jestes " << "dzieckiem";
if((wiek >= 13) and (wiek <= 17)) cout << "Masz " << wiek << " lat, wiec jestes " << "nastolatkiem";
if((wiek >= 18) and (wiek <= 64)) cout << "Masz " << wiek << " lat, wiec jestes " << "doroslym";
if(wiek >= 65) cout << "Masz " << wiek << " lat, wiec jestes " << "seniorem";
}
