/*
 * 1. MODUL I : ARRAY & DYNAMIC ARRAY Soal
 *   Buatlah program C++ yang mendeklarasikan array 3 dimensi
 *         berukuran[2][3][4]
 *             .-
 *   - -Lapis pertama(indeks 0) diisi dengan bilangan Genap berurutan mulai dari
 *      2(2, 4, 6, 8...)
 *          .Lapis
 *      kedua(indeks 1) diisi dengan bilangan Ganjil berurutan mulai dari
 *      1(1, 3, 5, 7...)
 *          .Tugas akhirnya,
 *   jangan cetak array 3 dimensinya !Melainkan,
 *   hitung hasil penjumlahan antara elemen lapis pertama dan lapis kedua pada
 *   posisi indeks yang sama,
 *   lalu tampilkan hasil penjumlahannya dalam bentuk satu buah tabel
 *       2 dimensi(3x4)
 *           .Contoh Output : Hasil Penjumlahan Lapis 1(Genap)dan Lapis
 * 2(Ganjil) : 3 7 11 15 19 23 27 31 35 39 43 47 Note : 2 + 1 = 3, 4 + 3 = 7, 6
 * + 5 = 11, dst. : u
 */

#include <iostream>
using namespace std;

int main()
{
	int main_array[2][3][4];

	int filling_genap = 2;
	for (int k = 0; k < 4; ++k) {
		main_array[0][0][k] = filling_genap;
		filling_genap += 2;
	}

	int filling_ganjil = 1;
	for (int k = 0; k < 4; ++k) {
		main_array[0][1][k] = filling_ganjil;
		filling_ganjil += 2;
	}

	int nil = 0;
	for (int k = 0; k < 4; ++k) {
		main_array[0][2][k] = nil;
	}

	// cout << main_array[0][0][1] << endl;
	//  TABEL 2
	for (int j = 0; j < 4; ++j) {
		main_array[1][j][0] = main_array[0][j][0] + main_array[0][j][1];
	}

	for (int i = 0; i < 2; ++i) {
		cout << "Tabel " << i + 1 << endl;
		for (int j = 0; j < 3; ++j) {
			for (int k = 0; k < 4; ++k) {
				// cout << "Baris " << k + 1 << endl;
				cout << main_array[i][j][k] << "\t";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
