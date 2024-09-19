#include <iostream>
using namespace std;

int faktorial(int N)
{
    int i, fak = 1;

    for (i = N; i >= 1; i--)
    {
        fak = fak * i;
    }
    return fak;
}

int main()
{
    int fa, nilai;
    cout << "ketikan angka :";
    cin >> nilai;
    fa = faktorial(nilai);
    cout << "faktorial dari " << nilai << " adalah " << fa << endl;
}