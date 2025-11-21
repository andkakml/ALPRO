#include <iostream>
#include <string>
using namespace std;
int main(){
    string username,password,kondisi;
    bool verifikasi;
    int angka1,angka2,hasil;
    angka1=2;
    angka2=2;
    hasil=angka1*angka2;

    cout << "Cek apakah akun anda sudah diverifikasi atau belum"<<endl;
    cout << "Silahkan Login"<<endl;
    cout << "Masukan Username : ";
    getline(cin,username);
    cout << "Masukan Password : ";
    getline(cin,password);

    if (username == "Andika"){
        verifikasi = true;
        cout << "Selamat akun anda telah diverifikasi";
    } else if(username == "Asep"){
        verifikasi = true;
        cout << "Selamat akun anda telah diverifikasi";
    } else{
        cout << "Akun belum diverifikasi, segera lakukan verifikasi!"<<endl;
        cout << "Jawab soal berikut untuk verifikasi"<<endl;
    }

    cout<<"2 dikali 2 adalah : ";
    cin>>hasil;
    if (hasil == 4){
        verifikasi = true;
        cout<<"Jawabannya benar dan selamat akun anda diverifikasi";
    } else{
        cout<<"Salah, akun anda gagal verifikasi";
    }
    

    

    


    return 0;
}