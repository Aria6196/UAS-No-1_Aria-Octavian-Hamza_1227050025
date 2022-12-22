# Ujian Akhir Semester 
<br>Mata Kuliah 	: Dasar Pemograman
<br> Nama		: Aria Octavian Hamza
<br>NIM		:	1227050025
<br>Jurusan		:[Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum
Array adalah kumpulan beberapa data yang disimpan dalam satu variabel. Jadi, berbeda dengan variabel sebelumnya yang hanya menyimpan 
satu nilai saja, array dapat menampung lebih dari satu nilai. Untuk mendeklarasikan sebuah array dalam C++, kita harus menggunakan tanda [ ] 
(bracket). Adapun bentuk umum dari pendeklarasian array satu dimensi adalah sebagai berikut:<br>
tipe_data nama_array [jumlah_indeks]<br>

Selain itu array juga dapat dideklarasikan sebagai array multi-dimensi. Array multi-dimensi merupakan array yang mempunyai ukuran lebih dari 
satu. pendeklarasian array sama dengan array berdimensi satu, hanya saja menggunakan tanda [ ] (bracket) tambahan. Array multi-dimensi 
dapat dideklarasikan sebagai berikut:<br>
tipe_data nama_array [jumlah_indeks][jumlah_indeks]<br>

Program ini berfungsi untuk mengubah baris menjadi kolom dan kolom menjadi baris pada array menggunakan bahasa pemrograman C++ 
dengan memanfaatkan nested loop.


## Source Code
```cpp
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
```

## Output
![Screenshot_20221222_182911](https://user-images.githubusercontent.com/79699603/209125362-24f23512-7998-4bd1-8b64-15073d740a6c.png)
