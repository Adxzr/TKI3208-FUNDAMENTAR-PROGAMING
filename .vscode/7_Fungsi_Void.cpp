#include <iostream>
using namespace std;

void faktorial(int N)
{
    int i, fak = 1;

    for (i = N; i >= 1; i--)
    {
        fak = fak * i;
    }
    cout << "faktiorial dari" << N << "adalah" << fak << endl;
}
int main()
{
    int fak, nilai;
    cout << "ketikan angkal:";
    cin >> nilai;
    faktorial(nilai);
}
