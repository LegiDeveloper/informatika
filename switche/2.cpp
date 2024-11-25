#include <iostream>
#include <cctype>
using namespace std;
int main(){
	int temp;
	char Jaka;
	cout << "Podaj temperature w stopniach celsjusza" << " ";
	cin >> temp;
	cout << endl << "Podaj do jakiej jednostki to przeliczyc (F dla fahrenhaitow lub K dla kelwinow)";
	cin >> Jaka;
	
	
	
	switch(Jaka){
		case 'F':
		case 'f':
		cout << " " << (temp * 9/5) + 32 << " fahrenhaitow";
		break;
		case 'K':
		case 'k':
		cout << " " << temp + 273.15 << " kelwinow";
		break;
		
	}
	

		
	}
	
}
	/*if (islower(Jaka)){
		Jaka = toupper(Jaka);
		cout << Jaka;*/