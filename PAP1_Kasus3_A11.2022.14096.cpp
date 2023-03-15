#include <iostream>
using namespace std;
int main (){

	int N, a, i, inc;
	cout << "Input a: ";
	cin >> N;
	cout << "Input b: ";
	cin >> a;
	cout << "Increment value:";
	cin >> inc;

	cout << endl;
	for (i=N; i<=a; i=i+inc) {
	cout << i << " ";
	}
	cout << endl;
	return 0;
	
		
}