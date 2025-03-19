#include <iostream>
#include <string>
using namespace std;

int main() {
    char text[20];
    cout << "Podaj tekst: ";
    cin.getline(text, 20);
    
    for(int i = 0; i <= 20; i++){
		
	if(text[i] == 'a'){
		text[i] = 'o';
  }
  cout << text[i];
 }
}