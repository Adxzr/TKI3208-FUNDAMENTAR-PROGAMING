#include <iostream>
#include <schannel.h>

using namespace std;
int main()
{
    string nama[20];
    int a, n;
    float nilai[10], jumlah = 0, avg;
    cout << "ketikan jumlah mahasiswa";
    cin >> n;

    for (a = 0; a < n; a++)
    {
        cout << " ketikan nama mahasiswa ke" << a + 1 << ":";
        cin >> nama[a];
        cout << "ketikan nilai mahasiswa ke" << a + 1 << ":";
        jumlah = jumlah + nilai[a];
    }

    avg = jumlah / n;
    cout << "rata rata =" << avg << endl
         << endl;
    cout << "daftar mahasiswa yang nilainya lebih tinggi dari nilai rata" << endl;
    for (a = 0; a < n; a++)
    {
        if (nilai[a] > avg)
        {
            cout << "nama:" << nama[a] << endl;
            cout << "nilai:" << nama[a] << endl;
        }
    }
}