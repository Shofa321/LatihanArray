#include <iostream>

using namespace std;

int main()
{
    int i;
    string xiirpl[] = {"Rega", "Saiful", "Hendra", "Fajar", "IqbalCKP"};
    cout << "Yang paling cakep di Xll RPL 1 adalah" << xiirpl[1]<< endl;
    cout << "Diantara";
    for(i=0; i<5; i++) {
        cout << xiirpl[i] << ", ";
    }
    return 0;
}
