#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Daftar harga kamar per malam
    const int hargaSingle = 200000;
    const int hargaDouble = 350000;
    const int hargaKeluarga = 500000;
    const int hargaVIP = 750000;

    string namaTamu;
    string tipeKamar;
    int lamaMenginap;
    int biayaMenginap = 0;
    double pajak, totalBiaya;


    cout << "Masukkan nama tamu: ";
    getline(cin, namaTamu);
    cout << "Pilih tipe kamar (Single, Double, Keluarga, VIP): ";
    cin >> tipeKamar;
    cout << "Masukkan lama menginap (malam): ";
    cin >> lamaMenginap;

    
    if (tipeKamar == "Single")
    {
        biayaMenginap = hargaSingle * lamaMenginap;
    }
    else if (tipeKamar == "Double")
    {
        biayaMenginap = hargaDouble * lamaMenginap;
    }
    else if (tipeKamar == "Keluarga")
    {
        biayaMenginap = hargaKeluarga * lamaMenginap;
    }
    else if (tipeKamar == "VIP")
    {
        biayaMenginap = hargaVIP * lamaMenginap;
    }
    else
    {
        cout << "Tipe kamar tidak valid. Silakan pilih antara single, double, keluarga, atau VIP." << endl;
        return 1;
    }

    
    pajak = biayaMenginap * 0.15;
    totalBiaya = biayaMenginap + pajak;

    
    cout
        << "\nBukti Pembayaran" << endl;
    cout << "-------------------------------" << endl;
    cout << "Nama Tamu: " << namaTamu << endl;
    cout << "Tipe Kamar: " << tipeKamar << endl;
    cout << "Lama Menginap: " << lamaMenginap << " malam" << endl;
    cout << "Biaya Menginap: Rp " << fixed << setprecision(0) << biayaMenginap << endl;
    cout << "Pajak (15%): Rp " << fixed << setprecision(0) << pajak << endl;
    cout << "Total Biaya: Rp " << fixed << setprecision(0) << totalBiaya << endl;
    cout << "-------------------------------" << endl;

    return 0;
}
