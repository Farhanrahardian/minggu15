#include <iostream>
using namespace std;
int main () {

	int a, b, i; 

	cout << "Input a: ";
	cin >> a;
	cout << "Input b: ";
	cin >> b;
	
	for (i=b; i>=a; i--){
	cout << i << " ";
}
cout << endl;
	return 0;
}