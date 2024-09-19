#include <iostream>
using namespace std;

int main()
{
    int fak, nilai;
    int faktorial(int nilai);

    cout << "ketikan angka :";
    cin >> nilai;
    fak = faktorial(nilai);
    cout << "fartoeial dari" << nilai << "adalah" << fak << endl;
}
int faktorial(int N)
{
    int i, fak = 1;

    for (i = N; i > 1; i--)
    {
        fak = fak * i;
    }
    return fak;
}