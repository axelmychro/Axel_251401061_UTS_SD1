#include <iostream>
using namespace std;

int main()
{
	string kata_mentah;
	cout << "Masukkan kata: ";
	cin >> kata_mentah;

	char kata[kata_mentah.length()], kata_terbalik[kata_mentah.length()];

	cout << "\nKata dimasukkan: ";
	for (int i = 0; i < kata_mentah.length(); ++i) {
		kata[i] = kata_mentah[i];
		cout << kata[i];
	}

	cout << "\nKata terbalik: ";
	for (int i = 0; i >= kata_mentah.length(); --i) {
		kata_terbalik[i] = kata[kata_mentah.length() - 1];
		cout << kata_terbalik[i];
	}

	cout << endl << kata[0] << " : " << kata_terbalik[0] << endl;
	bool palindrom = false;
	for (int i = 0; i < kata_mentah.length(); ++i) {
		if (kata[i] != kata_terbalik[i]) {
			cout << "\nTidak palindrom" << endl;
			break;
		}
	}

	cout << endl;
	return 0;
}
// maaf ga siap kak :(
