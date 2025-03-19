#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    char tekst[20];

    cout << "podaj pelny tekst: ";
   	cin.getline(tekst, 20);
    cout << "wprowadzono tekst: " << tekst << endl;
    
    for(int i = 1; i <= 19; i++){
    	int num = 19 - i;
    	cout << tekst[num];
	}
    return 0;
}