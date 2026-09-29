#include <iostream>
using namespace std;

int main()
{

    int kode_makanan;

    cout << "Masukkan kode makanan: ";
    cin >> kode_makanan;

    if (kode_makanan == 1)
    {

        cout << "Anda memilih Nasi Goreng" << endl;
    }
    else if (kode_makanan == 2)
    {

        cout << "Anda memilih Mie Goreng" << endl;
    }
    else if (kode_makanan == 3)
    {

        cout << "Anda memilih Ayam Geprek" << endl;
    }
    else if (kode_makanan == 4)
    {

        cout << "Anda memilih Bakso" << endl;
    }
    else if (kode_makanan == 5)
    {

        cout << "Anda memilih Soto" << endl;
    }
    else
    {

        cout << "Kode makanan tidak valid" << endl;
    }

    return 0;
}