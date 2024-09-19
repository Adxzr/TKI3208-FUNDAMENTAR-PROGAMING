#include <iostream>
using namespace std;

float average()
{
    float N, rata, sum = 0, angka;
    int i;

    cout << "ketikkan banyak angka :";
    cin >> angka;

    for (i = 1; i <= N; i++)
    {
        cout << "ketikan angka ke" << i << ":";
        cin >> angka;
        sum = sum + angka;
    }

    rata = sum / N;
    return rata;
}
int main()
{
    float rata;
    rata = average();
    cout << "rata-rat=" << rata << endl;
}
