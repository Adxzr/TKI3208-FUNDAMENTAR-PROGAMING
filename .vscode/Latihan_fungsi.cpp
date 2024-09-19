#include <iostream>
#include <limits>

using namespace std;

long long faktorial(int n)
{
    if (n <= 1)
        return 1;
    return n * faktorial(n - 1);
}

int penambahan(int a, int b)
{
    return a + b;
}

double rataRata(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int main()
{
    string username, password;
    string correctUsername = "adzra";
    string correctPassword = "123";

    cout << "Masukkan username: ";
    cin >> username;
    cout << "Masukkan password: ";
    cin >> password;

    if (username == correctUsername && password == correctPassword)
    {
        cout << "Selamat datang, " << username << "!" << endl;
    }
    else
    {
        cout << "Username atau password salah." << endl;
        return 1;
    }

    int pilihan;
    cout << "Pilih menu:\n";
    cout << "1. Faktorial\n";
    cout << "2. Penambahan\n";
    cout << "3. Rata-rata\n";
    cout << "Masukkan pilihan (1/2/3): ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
    {

        int nilai;
        cout << "Masukkan nilai: ";
        cin >> nilai;
        if (nilai < 0)
        {
            cout << "Nilai harus positif." << endl;
            return 1;
        }
        cout << "Faktorial dari " << nilai << " adalah " << faktorial(nilai) << endl;
        break;
    }
    case 2:
    {
        int nilai1, nilai2;
        cout << "Masukkan dua nilai (pisahkan dengan spasi): ";
        cin >> nilai1 >> nilai2;
        cout << "Hasil penambahan " << nilai1 << " dan " << nilai2 << " adalah " << penambahan(nilai1, nilai2) << endl;
        break;
    }
    case 3:
    {
        int nilai1, nilai2, nilai3;
        cout << "Masukkan tiga nilai (pisahkan dengan spasi): ";
        cin >> nilai1 >> nilai2 >> nilai3;
        cout << "Rata-rata dari " << nilai1 << ", " << nilai2 << ", dan " << nilai3 << " adalah " << rataRata(nilai1, nilai2, nilai3) << endl;
        break;
    }
    default:
        cout << "Pilihan tidak valid." << endl;
        return 1;
    }

    cout << "Terima kasih." << endl;

    return 0;
}
