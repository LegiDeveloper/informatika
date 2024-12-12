#include <iostream>
using namespace std;
int main(){
	int N;
	cout << "Podaj liczbe: ";
	cin >> N;
int V;
	for (int i = 1; i <= N; i++){
		V += i;
		cout << V << endl;
		if(i == N){
			cout << "Suma liczb od 1 do (" << N << ") wynosi: " << V << endl;
		}
	}
	
	
}