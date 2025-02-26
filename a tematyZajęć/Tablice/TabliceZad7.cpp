#include <iostream>
using namespace std;
int main(){

int macierz[2][3];
int macierz2[3][2];

cout << "podaj liczby calkowite do macierzy 2x3:\n";
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        cout << "Podaj liczbe dla wiersza " << i + 1 << " i kolumny " << j + 1 << ": ";
        cin >> macierz2[j][i];
    }
}


cout << "\nPodane liczby to:\n";
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        cout << macierz2[j][i] << " ";
    }
    cout << endl; 
}
}