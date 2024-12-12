#include <iostream>
using namespace std;
int main(){
	int W;
	int K;
	cout << "Podaj liczbe kolumn: " << endl;
	cin >> K;
	cout << "Podaj liczbe wierszy: " << endl;
	cin >> W;
	cout << endl;
	int V;
		
for (int i = 1; i <= K; i++){

	for(int j = 1; j <= W; j++){
			V += 1;
		cout << V * 2 - 1 << " ";
}
cout << endl;
		}

	}