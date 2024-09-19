#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string cars[4] = {"volvo", "BMW", "Ford", "Mazda"};
    int i;

    cout << "isi dari array indeks ke 0 adlah " << cars[0] << endl
         << endl;

    cout << "mencetak semua isi dari array cars" << endl;

    for (i = 0; i < 4; i++)
    {
        cout << "card index ke " << i << " = " << cars[i] << endl;
    }
}