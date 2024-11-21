#include <iostream>
using namespace std;
int main(){
	int liczba1;
	int liczba2;
	char znak;
	cout << "Podaj pierwsza liczbe" << endl;
	cin >> liczba1;
	cout << "Podaj druga liczbe" << endl;
	cin >> liczba2;
	cout << "Podaj znak rownania: '*' , '+' , '-' lub '/'" << endl;
	cin >> znak;
	switch(znak){
		case '+':
			cout << (liczba1 + liczba2) << endl;
			break;
		case '/':
		if(liczba2 > 0 and liczba1 > 0){
			cout << (liczba1 / liczba2) << endl;
			break;
			}
		else cout << "nie dziel przez 0!";
		break;
		case '-':
			cout << (liczba1 - liczba2) << endl;
			break;
		case '*':
			cout << (liczba1 * liczba2) << endl;
			break;
			}
	
	}