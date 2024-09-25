#include <iostream>
#include <string>
using namespace std;

string masukkanKalimat()
{
    string kalimat;
    int jumlahKata = 0;

    while (jumlahKata < 3)
    {
        cout << "Masukkan kalimat (lebih dari 3 kata): ";
        getline(cin, kalimat);

        jumlahKata = 1; // hitung kata pertama
        for (char c : kalimat)
        {
            if (c == ' ')
            {
                jumlahKata++;
            }
        }

        if (jumlahKata < 3)
        {
            cout << "Kalimat harus berisi lebih dari 3 kata!" << endl;
        }
    }

    return kalimat;
}

char masukkanKarakter()
{
    char huruf;
    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> huruf;
    return huruf;
}

int hitungKarakter(const string &kalimat, char huruf)
{
    int jumlah = 0;
    char hurufLower = tolower(huruf);

    for (char c : kalimat)
    {
        if (tolower(c) == hurufLower)
        {
            jumlah++;
        }
    }

    return jumlah;
}

int main()
{
    // Input kalimat lebih dari 3 kata
    string kalimat = masukkanKalimat();

    // Input huruf yang ingin dihitung
    char huruf = masukkanKarakter();

    // Menghitung jumlah huruf yang ada dalam kalimat
    int jumlahHuruf = hitungKarakter(kalimat, huruf);

    // Menampilkan hasil
    cout << "Huruf '" << huruf << "' muncul sebanyak " << jumlahHuruf << " kali dalam kalimat." << endl;

    return 0;
}