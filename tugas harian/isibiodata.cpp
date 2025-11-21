#include <iostream>
#include <string>
using namespace std;

int main() {

    long npm;
    string nama,fakultas,prodi;
    

    cout << "\nMasukan data data berikut" << endl;
    cout << "NPM      : ";
    cin >> npm;


    cout << "Nama     : "<<endl;
    getline(cin,nama);

    cout << "Fakultas : "<<endl;
    getline(cin,fakultas);

    cout << "Prodi    : "<<endl;
    getline(cin, prodi);

    cout << "\n=== Data Mahasiswa ===" << endl;
    cout << "NPM      : " << npm << endl;
    cout << "Nama     : " << nama << endl;
    cout << "Fakultas : " << fakultas << endl;
    cout << "Prodi    : " << prodi<< endl;

    return 0;
}
