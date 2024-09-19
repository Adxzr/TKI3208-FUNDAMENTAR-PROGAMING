#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;

    // Perulangan terus berjalan sampai input adalah "exit"
    while (true)
    {
        cout << "Masukkan perintah ('exit' untuk keluar): ";
        cin >> input;

        // Jika input adalah "exit", keluar dari perulangan
        if (input == "exit")
        {
            break;
        }

        // Menampilkan pesan "Program C++"
        cout << "Program C++" << endl;
    }

    return 0;
}
