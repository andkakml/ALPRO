#include <iostream>
#include <string>
using namespace std;
int main(){
    string username, password;

    cout <<"\n Masukan username dan password Anda "<<endl;

    cout<<"Username : "<<endl;
    cin>>username;
    cout<<"password"<<endl;
    cin >> password;

    if(username == "jokowi"){
        cout << "selamat akun anda premium"<<endl;
    } else if (username == "gibran"){
        cout << "akun anda masih reguler"<<endl;
    } else if(username== "andika") {
        cout<< "akun anda sudah dibaned"<<endl;
    } else{
        cout <<"akun tidak terdaftar";
    }
   
    


    return 0;
}