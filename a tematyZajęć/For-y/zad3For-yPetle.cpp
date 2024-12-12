#include <iostream>
using namespace std;
int main(){
	int N;
	cout << "Podaj liczbe: ";
	cin >> N;
	int V;
	cout << "Liczby nieparzyste od 1 do (" << N << "): " << endl; 
	for (int i = 1; i <= N; i++){
		V += 1;
		if(V % 2 != 0){
			cout << V << endl;
		}
	}
	
	
	
	
}