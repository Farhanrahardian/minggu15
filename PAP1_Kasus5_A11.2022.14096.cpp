#include <iostream>
using namespace std;
int main (){
	
	int nilai;
	string hasil;

	cout<<"masukan nilai: ";
	cin >> nilai;

	if(nilai >=85 && nilai <=100){
		hasil = "A";
	}

	else if(nilai >=80 && nilai <=85){
		hasil = "AB";
	}
	else if(nilai >=70 && nilai <=80){
		hasil = "B";
	}
	else if(nilai >=65 && nilai <=70){
		hasil = "BC";
	}
	else if(nilai >=60 && nilai <=65){
		hasil = "C";
	}
	else if(nilai >=50 && nilai <=60){
		hasil = "D";
	}
	else if(nilai >=0 && nilai <=50){
		hasil = "E";
	}

	cout << "Nilai: "<<hasil<<endl;
	

	return 0;
}