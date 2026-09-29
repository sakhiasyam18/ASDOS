#include <iostream>
using namespace std;

int main()
{

    int umur;
    int tinggi;

    cout << "Masukkan umur: ";
    cin >> umur;

    cout << "Masukkan tinggi badan (cm): ";
    cin >> tinggi;

    if (umur >= 17 && tinggi >= 150)
    {

        cout << "Boleh masuk wahana" << endl;
    }
    else if (umur >= 17 && tinggi < 150)
    {

        cout << "Tinggi badan tidak memenuhi" << endl;
    }
    else if (umur < 17 && tinggi >= 150)
    {

        cout << "Umur tidak memenuhi" << endl;
    }
    else
    {

        cout << "Umur dan tinggi tidak memenuhi" << endl;
    }

    return 0;
}