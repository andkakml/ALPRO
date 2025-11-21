#include <iostream>
using namespace std;

int main() {
    int umur, kekuatan;

    cout << "=== Program Kelayakan Bertanding Panco ===" << endl;
    cout << "Masukkan umur peserta: ";
    cin >> umur;
    cout << "Masukkan kekuatan peserta (0-100): ";
    cin >> kekuatan;

    if (umur >= 18) {
        if (kekuatan >= 70) {
            cout << "Status: Layak Bertanding" << endl;
        } else {
            cout << "Status: Belum Layak (Kekuatan kurang)" << endl;
        }
    } else {
        cout << "Status: Belum Layak (Umur belum cukup)" << endl;
    }

    return 0;
}