#include <iostream>
using namespace std;
int main(){
	int temp;
	char Jaka;
	cout << "Podaj temperature w stopniach celsjusza" << " ";
	cin >> temp;
	cout << endl << "Podaj do jakiej jednostki to przeliczyc";
	cin >> Jaka;
	
	switch(Jaka){
		case 'F':
		cout << " " << (temp * 9/5) + 32 << " fahrenhaitow";
		break;
		case 'K':
		cout << " " << temp + 273.15 << " kelwinow";
		break;
		
	}
	
	
	
}