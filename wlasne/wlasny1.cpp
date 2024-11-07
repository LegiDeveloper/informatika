#include <iostream>
using namespace std;
int main(){
	int a,b,c;
cin >> a >> b >> c;
cout << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl;
if(a > b) cout << "a jest wieksze od b" << endl;
if(b > a) cout << "b jest wieksze od a" << endl;
if(a == b) cout << "a jest rowne b" << endl;
if(c < b) cout << "c jest mniejsze od b" << endl;
if(c > b) cout << "c jest wieksze od b" << endl;
if(c == b) cout << "c jest rowne b" << endl;
if(c < a) cout << "c jest mniejsze od a" << endl;
if(c > a) cout << "c jest wieksze od a" << endl;
if(c == a) cout << "c jest rowne a" << endl;
}


