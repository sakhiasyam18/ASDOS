#include <iostream>
using namespace std;

void ubah_nilai(int *x); // Pakai * di sini

int main()
{
    int su_bambang = 87;
    cout << "Nilai awal su_bambang = " << su_bambang << endl;

    // PEMANGGILAN: Wajib membungkus dengan & (Kirim Alamat)
    ubah_nilai(&su_bambang);

    cout << "Nilai su_bambang sekarang = " << su_bambang << endl;
    return 0;
}

void ubah_nilai(int *x)
{
    // EKSEKUSI: Wajib pakai * untuk membongkar alamatnya
    *x = 92;
}