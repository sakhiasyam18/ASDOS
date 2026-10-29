#include <iostream>
using namespace std;

void ubah_nilai(int &x); // Pakai & di sini

int main()
{
    int su_bambang = 87;
    cout << "Nilai awal su_bambang = " << su_bambang << endl;

    // PEMANGGILAN: Cukup panggil namanya saja
    ubah_nilai(su_bambang);

    cout << "Nilai su_bambang sekarang = " << su_bambang << endl;
    return 0;
}

void ubah_nilai(int &x)
{
    // EKSEKUSI: Langsung ganti angkanya
    x = 92;
}