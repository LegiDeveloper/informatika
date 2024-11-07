#include <iostream>
#include <Windows.h>
using namespace std;
int main(){
	
	int i;
	i = 1;
	cout << i << endl;
	while(i < 10)
	{
		i += 1;
		sleep(1);
		cout << i << endl;
	}
	if(i >= 10){
		sleep(1);
		 cout << "i wynosi 10" << endl;
	} 
}