#include <iostream>
using namespace std;
int main(){
	float waga;
	cout <<  "Podaj swoja wage ";
	cin >> waga;
	float wzrost;
	cout << " podaj wzrost (W metrach) ";
	cin >> wzrost;
	float BMI = waga / (wzrost * wzrost);
	cout << "bmi " << BMI;
	if(BMI < 18.5) cout << " niedowage masz " << endl;
	else if(BMI < 25) cout << " jes git waga " << endl;
	else if(BMI < 30) cout << " zgub ten bembzon, schudnij troszku" << endl;
	else if(BMI > 30) cout << " BRACE FOR IMPACT!!!1!!!111" << endl;
}