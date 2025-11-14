#include <iostream>
#include <string>

using namespace std;
int main(){
    string nama_paket,nama_pelanggan,jenispaketwisata,diskon;
    double harga_paket, total_harga;
    int jumlah_wisatawan;
    float hargadiskon;
    char pilihan,jenis;
    
   
    
    // destinasi = "Bandung zoo dan Museum gedung sate", "Rancaupas dan Ciwalini", "The Great asia africa dan trans studio bandung";

    cout << "===Sistem Pengelolaan Paket Wisata dan Perhitungan Biaya Perjalanan==="<<endl;
    cout << "Masukan nama pemesan     :   ";
    getline(cin,nama_pelanggan);
    cout << "Pilihan Paket destinasi"<<endl;
    cout << "Paket A :  Bandung zoo dan Museum gedung sate"<<endl;
    cout << "Paket B :  Rancaupas dan Ciwalini"<<endl;
    cout << "Paket C :  The Great asia africa dan trans studio bandung"<<endl;
    cout << "Masukan Pilihan Anda : ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 'A': case 'a':
        harga_paket = 75000;
        cout << "Detail Paket Bandung zoo dan Museum gedung sate"<<endl;

        break;
    case 'B': case 'b':
        harga_paket = 85000;
        cout << "Detail Paket Rancaupas dan Ciwalini"<<endl;
        break;
    case 'C': case 'c':
        harga_paket = 165000;
        cout << "Detail Paket The Great Asia Africa dan Trans Studio Bandung"<<endl;
         break;
    default:
        cout<<"Pilihan tidak valid";
        break;
    }
    
    cout << "Pilih jenis paket (R = Reguler, V = VIP): ";
    cin >> jenis;

    switch (jenis) {
        case 'R':
        case 'r':
            jenispaketwisata = "Reguler";
            cout << "Jenis Paket Reguler Harga Rp."<<harga_paket<<endl;
            cout << "Masukan jumlah wisatawan   :   ";
            cin >> jumlah_wisatawan;
            total_harga = harga_paket*jumlah_wisatawan;
            cout << " Total harga Rp."<<total_harga<<endl;
            break;

        case 'V':
        case 'v':
            jenispaketwisata = "VIP";
            harga_paket *= 1.5; // harga VIP 50% lebih mahal
            cout << "Jenis Paket VIP Harga Rp."<<harga_paket<<endl;
            cout << "Masukan jumlah wisatawan   :   ";
            cin >> jumlah_wisatawan;
            total_harga = harga_paket*jumlah_wisatawan;
            cout << " Total harga Rp."<<total_harga<<endl;
            break;

        default:
            cout << "Jenis paket tidak valid!\n";
            return 0;
    }

    if (jumlah_wisatawan>=5 && jenispaketwisata == "VIP")
    {
        cout<<"Anda mendapat diskon 20%"<<endl;
        double potongan = total_harga*0.2;
        hargadiskon = total_harga-potongan;
        diskon="20%";
    } else{
        cout<<"Anda tidak memenuhi syarat diskon"<<endl;
        hargadiskon = total_harga;
        diskon="0%";
    }
    
    cout<<"====Struk Pemesanan===="<<endl;
    cout<<"Paket destinasai yang dipilih : Paket"<<pilihan<<endl;
    cout<<"Jenis paket                   : "<<jenispaketwisata<<endl;
    cout<<"Jumlah Wisatawan              : "<<jumlah_wisatawan<<endl;
    cout<<"======================="<<endl;
    cout<<"Total harga                   : "<<total_harga<<endl;
    cout<<"Diskon                        : "<<diskon<<endl;
    cout<<"Harga setelah diskon          : "<<hargadiskon<<endl;


    


    

    




    return 0;
}