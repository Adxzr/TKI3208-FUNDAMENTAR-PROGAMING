#include <iostream>
using namespace std;

float average(float A, float B, float C)
{
    float rata;
    rata = (A + B + C) / 3;
    return rata;
}
int main()
{
    float a, b, c;
    float rt;

    cout << "ketikan nilai A:";
    cin >> a;

    cout << "ketikan nilai B:";
    cin >> b;

    cout << "ketikan nilai C:";
    cin >> c;
    rt = average(a, b, c);
    cout << "nilai rata-rata dari(" << a << "," << b << "," << c << ")adalah" << rt << endl;
}