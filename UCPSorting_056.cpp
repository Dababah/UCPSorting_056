// UCPSorting_056.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// 1.Algoritma bubble sort membandingkan elemen - elemen dan menukarkannya dengan

// 2.algoritma shell sort membandingkan dan menukar elemen - elemen  dengan

// 3.jika sudah ada beberapa data yang berurutan dalam algoritma sortir




// 056_bubblesort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int arr[20]; // Deklarasi variabel global array a dengan ukuran 20
int n; // Deklarasi variabel global n untuk menyimpan banyaknya elemen array 

void input() {
	while (true) {
		cout << "Masukkan banyaknya elemen pada array : "; // output kelayar
		cin >> n; // input dari pengguna 
		if (n <= 20) // jika n kurang dari atau sama dengan 20 
			break;  // keluar loop
		else {  // jika n lebih dari 20
			cout << "\Array dapat mempunyai maksimal 20 elemen. \n"; // output ke layar

		}
	}

	cout << endl;
	cout << "======================" << endl;
	cout << " Masukkan Elemen Array" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i++) { // looping dengan i di mulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ": "; // output ke layar
		cin >> arr[i];                         // ouput dari pengguna

		void  bubblesortArray() { // prosedur mengurutkan array dengan metode bubble sort
			int pass = 1; // step 1

			do {
				for (int j = 0; j <= n - 1 pass; j++) {// step 2
					if (arr[j] > arr[j + 1]) { // step 3
						int temp;
						arr[j] = arr[k + 1];
						arr[j + 1] = temp;

					}

				}
				pass = pass + 1; // step 4

				cout << "\nPass" << -1 << ": "; // number of pass 
				for (int k = 0; k n; k++) {
					cout << arr[k] << " "; // Menampilkan data pada number pass

				}
				cout << endl;
			} while (pass <= n - 1); // step 5

			cout void display() {
				cout << endl;
				cout << "=================================" << endl;
				cout << "Element Array yang telah tersusun" << endl;
				cout << "=================================" << endl;
				cout << endl;
				for (int j = 0; j < n; j++) {
					cout << Arr[j]; // menampilkan array
					if (j < n - 1) {
						cout << "-->";
					}



				}

				int main() {


					input();

					bubbleSortArray();
					display();

					system("pause");
					return 0;

				}







