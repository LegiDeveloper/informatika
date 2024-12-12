#include <iostream>
using namespace std;
int main(){
	int N;
	cout << "Podaj liczbe: " << endl;
	cin >> N;
	int V;
	for (int i = 1; i <= N; i++){
		V += 1;
		cout << "(" << V << ")^2 = " << V*V <<  endl;
	}
	
}