#include <iostream>
using namespace std;
int main(){
    // int cc;
    // cout << "Menentukan motor anda masuk ke kelas balap mana tergantung CC motor"<<endl;
    // cout << "Masukan CC motor anda   : ";
    // cin >> cc;

    // switch (cc)
    // {
    // case 200:
    //     cout << "Motor anda masuk ke kelas balap A";
    //     break;
    // case 150:
    //     cout << "Motor anda Masuk ke kelas balap B";
    //     break;
    // case 100:
    //     cout << "Motor anda Masuk ke kelas balap C";
    //     break;
    
    // default:
    //     cout << "CC motor anda tidak valid";
    //     break;
    // }
   
    int status;
    cout << "=== Memilih Status kehadiran ==="<<endl;
    cout << "Ketik 1 untuk HADIR"<<endl;
    cout << "Ketik 2 untuk IZIN"<<endl;
    cout << "ketik 3 untuk SAKIT"<<endl;
    cout << "Pilih Status : ";
    cin >> status;

    switch (status)
    {
    case 1:
        cout << "Halo selamat pagi, senang hari ini anda hadir";
        break;
    
    case 2:
        cout << "Semoga bertemu lagi di hari esok";
        break;
    
    case 3:
        cout << "Semoga cepat sembuh";
        break;
    
    default:
        cout << "hanya pilih yang ada di list";
        break;
    }



    return 0;
}