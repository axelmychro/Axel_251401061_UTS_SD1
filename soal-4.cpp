#include <iostream>
using namespace std;

struct Node {
	int data;    // simpan data
	Node* kiri;  // simpan alamat node kiri
	Node* kanan; // simpan alamat node kanan
};

Node* akar = NULL; // diawal belum ada node

// TODO : Membuat Node Baru
void addNode(Node** akar, int isi)
{
	if (*akar == NULL) {
		Node* baru = new Node;
		baru->data = isi;
		baru->kiri = NULL;
		baru->kanan = NULL;
		*akar = baru;
	}
}

// TODO : Membuat In-order (kiri - root - kanan)
void inOrder(Node* akar)
{
	if (akar != NULL) {
		inOrder(akar->kiri);
		cout << akar->data << " ";
		inOrder(akar->kanan);
	}
}

int main()
{

	// Membentuk tree
	int total = 5;
	int nilai[total];
	int terbesar;
	int terkecil;
	for (int i = 0; i < total; ++i) {
		cout << "Masukkan nilai ke-" << i + 1 << ": ";
		cin >> nilai[i];
		if (i == 0) {
			terbesar = nilai[i];
			terkecil = nilai[i];
		}
		if (nilai[i] > terbesar) {
			terbesar = nilai[i];
		}
		if (nilai[i] < terkecil) {
			terkecil = nilai[i];
		}
	}
	addNode(&akar, nilai[0]);
	addNode(&akar->kiri, nilai[1]);
	addNode(&akar->kanan, nilai[2]);
	addNode(&akar->kiri->kiri, nilai[3]);
	addNode(&akar->kiri->kanan, nilai[4]);

	// Traversal
	cout << "\nTampilan InOrder : ";
	inOrder(akar);
	cout << endl;

	cout << "terbesar: " << terbesar << endl;
	cout << "terkecil: " << terkecil << endl;

	cout << endl;
	return 0;
}
