#include <iostream>
using namespace std;

int main()
{

    int kode_hari;

    cout << "Masukkan kode hari: ";
    cin >> kode_hari;

    switch (kode_hari)
    {

    case 1:
        cout << "Hari SENIN" << endl;
        break;

    case 2:
        cout << "Hari SELASA" << endl;
        break;

    case 3:
        cout << "Hari RABU" << endl;
        break;

    case 4:
        cout << "Hari KAMIS" << endl;
        break;

    case 5:
        cout << "Hari JUMAT" << endl;
        break;

    case 6:
        cout << "Hari SABTU" << endl;
        break;

    case 7:
        cout << "Hari MINGGU" << endl;
        break;

    default:
        cout << "Kode hari tidak valid" << endl;
    }

    return 0;
}