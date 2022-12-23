#include <iostream>
using namespace std;

void garis(){
	cout << endl << "====================================" << endl;
}

int main(){
	int x, y;
	
	int arr[10][10];
	int transpose[10][10];
	
	cout << "Nama: Aria Octavian Hamza" << endl << "NIM: 1227050025" << endl;
	
	garis();
	
	cout << "PENUKARAN BARIS DAN KOLOM PADA ARRAY";
	
	garis();
	
	cout << "Jumlah baris pada array: ";
	cin >> x;

	cout << "Jumlah kolom pada Array: ";
	cin >> y;

	cout << endl;
	
	cout << "Masukkan nilai array!" << endl;
		
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			cout << "Array [" << i << "][" << j << "]: ";
			cin >> arr[i][j];
		}
	}
	
	garis();
	
	cout << endl << "Array Sebelum Baris dan Kolom Ditukar" << endl;
	
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	
	for (int i = 0; i < x; i++){
	    for (int j = 0; j < y; j++){
	    	transpose[j][i] = arr[i][j];
	    }
	}
	
	garis();
	
	cout << "Array Setelah Baris dan Kolom Ditukar" << endl;
	
	for (int i = 0; i < y; i++){
		for (int j = 0; j < x; j++){
			cout << transpose[i][j] << "\t";
    	}
    cout << endl;
	}
	return 0;
}
