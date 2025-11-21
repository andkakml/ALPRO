#include <iostream>
using namespace std;
int main(){
    float jarijari,keliling,luas;
    float phi = 3.14;

    cout<<"masukan jari jari :  ";
    cin>>jarijari;
    keliling = 2*phi*jarijari;
    luas = phi*jarijari*jarijari;

    cout <<("Keliling lingkarannya adalah   = ")<<keliling<<endl;
    cout <<("luas lingkarannya adalah       = ")<<luas<<endl;
    return 0;
}