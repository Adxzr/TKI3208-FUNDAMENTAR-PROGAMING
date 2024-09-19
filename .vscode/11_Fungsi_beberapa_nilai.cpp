#include<iostream>
#include<math.h>
using namespace std;
void tabung(float t, float r, float &luas, float &volume) {
const float phi = 3.14;
luas = 2 * phi * pow(r,2) + 2 * phi * r * t;

volume = phi * pow(r, 2) * t;

cout<<"Luas = "<<luas<<endl;

cout<<"Volume = "<<volume<<endl;

}

int main() { float tinggi, radius, luas, volume;

cout<<"Ketikkan tinggi tabung: ";
cin>>tinggi;
cout<<"Ketikkan radius: ";
cin>>radius;
tabung (tinggi, radius, luas, volume);
}