#include <iostream>
using namespace std;
int main(){
	int N;
	cout << "Podaj liczbe: ";
	cin >> N;
	
	int V; 
	int W;
	for(int i = 1; i <= N; i++){
		cout << endl;
		for(int j = 1; j <= N; j++){
			cout << i << " * " << j << " = " << (i * j) << endl;
		}

	}
}
