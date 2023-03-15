#include<iostream>
using namespace std;
int main (){

	int N, arr[100], i, total;

	cout << "Input N: ";
	cin >> N;
	for(i = 0; i<N; i++){
	  cout << "Input ke-" << (i+1) <<": ";
	  cin >> arr[i];
	}
	
	cout << "Hasil array: ";
	for(i=0; i<N; i++)
	  cout << arr [i] <<" ";
	cout << endl;

	return 0;
}