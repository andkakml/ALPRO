#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string makan;

    cout << "Sudah makan ?(sudah/belum) :  ";
    cin >> makan;

    transform(makan.begin(), makan.end(), makan.begin(), ::tolower);

    if (makan == "sudah") {
        cout << "Mantap ";
    } else if (makan == "belum") {
    cout << "awas salatri";
    } else {
        cout << "hanya jawab sudah atau belum";
    }

    return 0;
}
