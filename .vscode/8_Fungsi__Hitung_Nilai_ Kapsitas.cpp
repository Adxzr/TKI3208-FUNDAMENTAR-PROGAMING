#include <iostream>
#include <math.h>
using namespace std;

void V(float t)
{
    float vt;
    vt = (t + 0.1) * exp(sqrt(t));
    cout << "tegnagan kapasistor pada t =" << t << "detik=" << vt << endl;
}
int main()
{
    float waktu;
    cout << "ketikan waktu(t):";
    cin >> waktu;
    V(waktu);
}
