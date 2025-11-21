#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int umur;
    string status;
    bool menikah;

    cout << "Syarat membuat KTP berdasarkan Umur atau status menikah"<<endl;
    
    cout << "Masukan Umur kamu                      : ";
    cin >> umur;
    cout << "Masukan status pernikahan (sudah/belum) : ";
    cin >> status;

    transform(status.begin(), status.end(), status.begin(), ::tolower);


    cout<<"Keterangan :" <<endl;

    if (status == "sudah")
    {
        menikah = true;
    } else if (status == "belum"){
        menikah = false;
    } else{
        cout << "Hanya bisa menjawab ya atau tidak";
    }

    if (menikah||umur>=17){ //disini saya pake logika or (||)
        cout << "Anda bisa Membuat KTP";
    } else{
        cout << "Anda belum bisa membuat KTP karena belum cukup umur atau belum menikah";
    }
    


    return 0;
}