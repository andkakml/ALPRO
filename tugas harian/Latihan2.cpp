#include <iostream>
using namespace std;
int main() {
   int angka1;
   int angka2;
   int angka3;
   int hasil;
   
   
   cout << "Masukan Angka Pertama :";
   cin >> angka1;
   cout << "Masukan Angka Kedua :";
   cin >> angka2;
   cout << "Masukan Angka Ketiga :";
   cin >> angka3;

   hasil=angka1*angka2*angka3;
   
   cout << "Hasil Perkalian dari "<< angka1;
   cout << " x " <<angka2;
   cout << " x " <<angka3; 
   cout << " adalah = "<< hasil;
   
   
  

    return 0;
}