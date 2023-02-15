#include <iostream>

using namespace std;

int main()
{
    string nama;
    int umur;
    char jk;

    cout << "Siapa namamu?" << endl;
    cout << "jawab :";
    //cin >> nama;
    getline(cin, nama);

    cout << "Berapa umurmu?" << endl;
    cout << "jawab :";
    cin >> jk;

    cout << "Kamu laki-laki atau perempuan (L/P)";
    cout << "jawab :";
    cin >> jk;

    cout << "Salam kenal! " << nama << " Anda berusia " <<umur;
    cout << " dan Anda berjenis kelamin " << jk;
    return 0;
}
