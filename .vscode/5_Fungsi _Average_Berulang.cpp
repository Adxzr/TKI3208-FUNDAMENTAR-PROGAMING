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
    float rt;
    rt = average(1, 5, 7);
    cout << "nilai rata-rata dari 1, 5,  dan 7 adalah" << rt << endl;
    rt = average(50, 65, 70);
    cout << "nilai rata-rata dari 1, 5,  dan 7 adalah" << rt << endl;
}