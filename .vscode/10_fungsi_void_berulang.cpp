#include <iostream>
#include <String>
using namespace std;

void cetak()
{
    int nim;
    string nama;
    cout << "Ketikkan Nama: ";
    cin >> nama;
    cout << "Ketikkan NIM: ";
    cin >> nim;
    cout << " =============" << endl;
    cout << " Nama: " << nama << endl;
    cout << " NIM: " << nim << endl;
    cout << "==================" << endl;
}

int main()
{
    cetak();
    cetak();
}
