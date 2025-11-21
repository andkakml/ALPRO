#include <iostream>
using namespace std;
int main(){
    float jarijari,tinggi,volume,luas;
    float phi=3.14;
    cout<<"Hitung Volume dan Luas permukaan Tabung"<<endl;
    cout<<"Masukan jari jarinya :";
    cin>>jarijari;
    cout<<"Masukan tingginnya :";
    cin>>tinggi;
    volume=phi*(jarijari*jarijari)*tinggi;
    luas=2*phi*jarijari*(jarijari+tinggi);

    cout<<("Volumenya adalah =")<<volume<<endl;
    cout<<("Luasnya adalah =")<<luas;
    return 0;
}