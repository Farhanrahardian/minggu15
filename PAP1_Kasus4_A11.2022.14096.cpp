#include <iostream>
using namespace std;

int main (){

	int i ,N ,total;

	cout << "Jumlah N: ";
	cin >> N;
	cout << endl;

	total = 1;
	cout << 1;
	i = 2;
	
	while (i<=N){
	cout << "  " << i;
	total = total + i;
	i++;
	}
	
	cout << endl;
	cout << "Hasil penjumlahan: " << total;
	cout << endl;

	return 0;
}