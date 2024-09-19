#include <iostream>
using namespace std;
int main()
{
    int noarray;
    int array[10];
    cout << "contoh tanpa array" << endl
         << endl;
    cout << "masukan nilai pertama :";
    cin >> noarray;
    cout << "masukanb nilai kedua ;";
    cin >> noarray;
    cout << "nilai variabel noarray" << noarray << endl;
    cout << "contoh dengan array" << endl
         << endl;
    cout << "masukan nilai pertama;";
    cin >> array[0];
    cout << "masukan nilai kedua:";
    cin >> array[1];
    cout << "nilaivariabel array[0]:" << array[0] << endl;
    cout << "nilaivariabel array[1]:" << array[0] << endl;
}