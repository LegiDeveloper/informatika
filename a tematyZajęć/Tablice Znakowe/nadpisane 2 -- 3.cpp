#include <iostream>
#include <string>
using namespace std;

int main() {
    char text[20];
    char znak;
    int liczbaWystapien;
    cout << "Podaj tekst: ";
    cin.getline(text, 20);
    cout << "Podj znak do zliczenia: ";
    cin >> znak;
    
    for(int i = 0; i <= 20; i++){
	if(text[i] == znak){
		 liczbaWystapien += 1;
  }
  

 }
 cout << text;
  cout << "\n Liczba wystapien znaku: " << liczbaWystapien;
}