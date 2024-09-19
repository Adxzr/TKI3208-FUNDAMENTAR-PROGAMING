#include <iostream>
using namespace std;

int main()
{
    int n, a;
    float temp[10], avg, sum = 0;

    cout << "ketikan jumalah hari:";
    cin >> n;
    cout << "ketikan temperatur untk masing masing hari" << endl;
    for (a = 0; a < n; a++)
    {
        cout << "temperatur hari ke" << a << ":";
        cin >> temp[a];
        sum = sum + temp[a];
    }
    avg = sum / n;
    cout << "rata rata temperatur adalah:" << avg << endl;
}