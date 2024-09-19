#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string namaBarang;
    double hargaSatuan;
    int jumlahBarang;
    double totalHarga, diskon = 0, hargaSetelahDiskon, uangDiterima, kembalian;

    cout << "Masukkan nama barang: ";
    getline(cin, namaBarang);
    cout << "Masukkan harga satuan barang: Rp ";
    cin >> hargaSatuan;
    cout << "Masukkan banyaknya barang: ";
    cin >> jumlahBarang;

    totalHarga = hargaSatuan * jumlahBarang;

    if (jumlahBarang >= 100)
    {
        diskon = 0.20;
    }
    else if (jumlahBarang >= 50)
    {
        diskon = 0.15;
    }
    else if (jumlahBarang >= 25)
    {
        diskon = 0.10;
    }
    else if (jumlahBarang >= 10)
    {
        diskon = 0.05;
    }

    hargaSetelahDiskon = totalHarga - (totalHarga * diskon);

    cout << "\nSlip Pembayaran" << endl;
    cout << "-------------------------------" << endl;
    cout << "Nama Barang       : " << namaBarang << endl;
    cout << "Harga Satuan      : Rp " << fixed << setprecision(0) << hargaSatuan << endl;
    cout << "Jumlah Barang     : " << jumlahBarang << endl;
    cout << "Total Harga       : Rp " << fixed << setprecision(0) << totalHarga << endl;
    cout << "Diskon (" << diskon * 100 << "%) : Rp " << fixed << setprecision(0) << (totalHarga * diskon) << endl;
    cout << "Harga Setelah Diskon: Rp " << fixed << setprecision(0) << hargaSetelahDiskon << endl;

    // Input uang yang diterima dari pembeli
    cout << "\nMasukkan uang yang diterima: Rp ";
    cin >> uangDiterima;

    // Menghitung kembalian jika ada
    if (uangDiterima >= hargaSetelahDiskon)
    {
        kembalian = uangDiterima - hargaSetelahDiskon;
        cout << "Uang Kembalian   : Rp " << fixed << setprecision(0) << kembalian << endl;
    }
    else
    {
        cout << "Uang yang diterima kurang dari harga barang. Pembayaran ditolak." << endl;
    }

    cout << "-------------------------------" << endl;

    return 0;
}
