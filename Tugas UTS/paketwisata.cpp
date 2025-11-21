#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <limits>

using namespace std;
int main(){
    cout << fixed << setprecision(0);

    while (true)
    {

        string nama_paket,nama_pelanggan,jenispaketwisata,diskon,jawaban;
        double harga_paket, subtotal, hargadiskon,rata_perorang, biaya_admin;
        int jumlah_wisatawan;
        char pilihan,jenis;
        bool rombonganbesar, konfirmasi;

        rombonganbesar = (jumlah_wisatawan >=20);
        
        cout << "===Sistem Pemesanan Paket Wisata==="<<endl;
        cout << "Masukan nama pemesan     :   ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
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
            harga_paket = 250000;
            cout << "Detail Paket Bandung zoo dan Museum gedung sate"<<endl;

            break;
        case 'B': case 'b':
            harga_paket = 350000;
            cout << "Detail Paket Rancaupas dan Ciwalini"<<endl;
            break;
        case 'C': case 'c':
            harga_paket = 765000;
            cout << "Detail Paket The Great Asia Africa dan Trans Studio Bandung"<<endl;
            break;
        default:
            cout<<"Pilihan tidak valid";
            continue;
            return 0;
        }
        
        cout << "Pilih jenis paket (R = Reguler, V = VIP): ";
        cin >> jenis;

        switch (jenis) {
            case 'R':
            case 'r':
                jenispaketwisata = "Reguler";
                cout << "Jenis Paket Reguler Harga Rp."<<harga_paket<<endl;
                break;

            case 'V':
            case 'v':
                jenispaketwisata = "VIP";
                harga_paket *= 1.5; // harga VIP 50% lebih mahal
                cout << "Jenis Paket VIP Harga Rp."<<harga_paket<<endl;
                break;

            default:
                cout << "Jenis paket tidak valid!\n\n";
                return 0;
        }

            cout << "Masukan jumlah wisatawan   :   ";
            cin >> jumlah_wisatawan;

        
            if (jumlah_wisatawan<=0)
            {
                cout << "Jumlah wisatawan tidak boleh 0"<<endl;
                cout << "Masukan jumlah wisatawan   :   ";
                cin >> jumlah_wisatawan;
            }

            subtotal = harga_paket*jumlah_wisatawan;
            rombonganbesar = (jumlah_wisatawan >=20);

            cout<<"Konfirmasi pesanan? (Iya/Tidak)"<<endl;
            cin>>jawaban;

            transform(jawaban.begin(), jawaban.end(), jawaban.begin(), ::tolower);

            if (jawaban == "iya")
            {
                konfirmasi=true;
                cout<<"Struk akan dicetak!"<<endl;
            } else if (jawaban == "tidak")
            {
                konfirmasi=false;
                cout<<"\nPesanan dibatalkan\n\n"<<endl;
                continue;
            } else {
                cout<<"Hanya jawab Ya atau tidak"<<endl;
                cout<<"Konfirmasi pesanan? (Iya/Tidak)"<<endl;
                cin>>jawaban;
            }
            
            

        if ((jumlah_wisatawan>=5 && jenispaketwisata == "VIP")||jumlah_wisatawan >= 25)
        {
            double potongan = subtotal*0.2;
            hargadiskon = subtotal-potongan;
            diskon="20%";
        }else{
            hargadiskon = subtotal;
            diskon="0%";
        }

        biaya_admin = 5000;
        hargadiskon = hargadiskon + biaya_admin;

        rata_perorang = hargadiskon / jumlah_wisatawan;



            cout<<"================Struk Pemesanan=================="<<endl;
            cout<<"Paket destinasai yang dipilih : Paket "<<pilihan<<endl;
            cout<<"Jenis paket                   : "<<jenispaketwisata<<endl;
            cout<<"Jumlah Wisatawan              : "<<jumlah_wisatawan<<endl;
            cout<<"================================================="<<endl;
            cout<<"Subtotal                      : Rp."<<subtotal<<endl;
            cout<<"Biaya Admin                   : Rp."<<biaya_admin<<endl;
            cout<<"Diskon                        : Rp."<<diskon<<endl;
            cout<<"Total harga                   : Rp."<<hargadiskon<<endl;
            cout<<"Rata rata per-orang           : Rp."<<rata_perorang<<endl;
            cout<<"==================Terima Kasih==================="<<endl;

        if (rombonganbesar)
        {
            cout<<"Keterangan : Pesanan anda adalah rombongan besar";
        }

        break;
    }
    

   
    


    return 0;
}