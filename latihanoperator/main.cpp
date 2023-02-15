#include <iostream>

using namespace std;

int main()
{
    int a, t, r;
    float LuasSegitiga, LuasLingkaran;
    float phi = 3.14;

    cout << "============================" << endl;
    cout << "APLIKASI PENGHITUNG SEGITIGA" << endl;
    cout << "============================" << endl;

    cout << "Masukkan alas segitiga : ";
    cin >> a;
    cout<<"Masukkan tinggi segitiga : ";
    cin >> t;
    LuasSegitiga = 0.5*a*t;
    cout << "Luas segitiga adalah " << LuasSegitiga <<" cm2" << endl;

    cout << "===========================" << endl;
    cout << "AplIKASI PENGHITUNG LINGKARAN" << endl;
    cout << "===========================" << endl;
    cout << "Masukkan jari-jari lingkaran :" << endl;
    cin >> r;
    LuasLigkaran = Phi*r*r;
    cout << "Luas lingkaran adalah"= << Luaslingkaran << " cm2" << endl;
    return 0;
}
