#include <iostream>
using namespace std;
int main(){
    float jarijari,tinggi,volume,luas;
    float phi=3.14;

    jarijari=4;
    tinggi=9;
    volume=phi*(jarijari*jarijari)*tinggi;
    luas=2*phi*jarijari*(jarijari+tinggi);

    cout<<("Volumenya adalah = ")<<volume<<endl;
    cout<<("Luasnya adalah = ")<<luas;
    return 0;
}