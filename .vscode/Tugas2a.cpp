#include <iostream>
using namespace std;

int main()
{
    int jumlahSiswa, nilaiAkhir;
    int lulus = 0, perbaikan = 0, tidakLulus = 0;

    // Meminta pengguna memasukkan jumlah siswa
    cout << "Masukkan jumlah siswa: ";
    cin >> jumlahSiswa;

    // Perulangan untuk setiap siswa
    for (int i = 1; i <= jumlahSiswa; i++)
    {
        // Meminta input nilai akhir siswa
        cout << "Masukkan nilai akhir siswa ke-" << i << ": ";
        cin >> nilaiAkhir;

        // Memeriksa kriteria kelulusan berdasarkan nilai akhir
        if (nilaiAkhir >= 70)
        {
            cout << "Keterangan: Lulus" << endl;
            lulus++;
        }
        else if (nilaiAkhir >= 50 && nilaiAkhir < 70)
        {
            cout << "Keterangan: TES PERBAIKAN" << endl;
            perbaikan++;
        }
        else
        {
            cout << "Keterangan: Tidak Lulus" << endl;
            tidakLulus++;
        }
    }

    // Menampilkan hasil akhir jumlah siswa yang lulus, tes perbaikan, dan tidak lulus
    cout << "\nJumlah siswa yang Lulus: " << lulus << endl;
    cout << "Jumlah siswa yang TES PERBAIKAN: " << perbaikan << endl;
    cout << "Jumlah siswa yang Tidak Lulus: " << tidakLulus << endl;

    return 0;
}
