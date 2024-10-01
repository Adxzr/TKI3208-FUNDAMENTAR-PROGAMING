#include <iostream>
#include <map>
#include <string>

using namespace std;

struct Rekening
{
    string nomorRekening;
    double saldo;
};

void tambahSaldo(map<string, Rekening> &dataRekening, const string &nama)
{
    if (dataRekening.find(nama) != dataRekening.end())
    {

        double tambah;
        cout << "Nomor rekening: " << dataRekening[nama].nomorRekening << endl;
        cout << "Saldo saat ini: " << dataRekening[nama].saldo << endl;
        cout << "Masukkan jumlah saldo yang ingin ditambahkan: ";
        cin >> tambah;
        dataRekening[nama].saldo += tambah;
        cout << "Saldo baru: " << dataRekening[nama].saldo << endl;
    }
    else
    {

        Rekening rekeningBaru;
        cout << "Rekening dengan nama '" << nama << "' belum ada." << endl;
        cout << "Masukkan nomor rekening: ";
        cin >> rekeningBaru.nomorRekening;
        cout << "Masukkan saldo awal: ";
        cin >> rekeningBaru.saldo;
        dataRekening[nama] = rekeningBaru;
        cout << "Rekening baru telah ditambahkan." << endl;
    }
}

int main()
{

    map<string, Rekening> dataRekening;
    string nama;

    cout << "Masukkan nama pemilik rekening: ";
    cin >> nama;

    tambahSaldo(dataRekening, nama);

    return 0;
}