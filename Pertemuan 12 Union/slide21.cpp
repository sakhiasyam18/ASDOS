#include <iostream>
using namespace std;

// Kos-kosan (Kamar Sendiri-sendiri)
struct ContohStruct
{
    int angka;      // Butuh 4 byte
    double desimal; // Butuh 8 byte
};

// Loker Tunggal (Berbagi Tempat)
union ContohUnion
{
    int angka;      // Butuh 4 byte
    double desimal; // Butuh 8 byte
};

int main()
{
    ContohStruct s;
    ContohUnion u;

    cout << "=== BUKTI UKURAN MEMORI ===" << endl;
    // Struct menjumlahkan memori, Union mengambil yang paling besar
    cout << "Ukuran Total Struct : " << sizeof(s) << " byte" << endl;
    cout << "Ukuran Total Union  : " << sizeof(u) << " byte" << endl;

    cout << "\n=== BUKTI ALAMAT MEMORI (KOORDINAT RAM) ===" << endl;
    // Mencetak alamat struct
    cout << "Alamat Struct.angka   : " << &s.angka << endl;
    cout << "Alamat Struct.desimal : " << &s.desimal << endl;

    // Mencetak alamat union
    cout << "Alamat Union.angka    : " << &u.angka << endl;
    cout << "Alamat Union.desimal  : " << &u.desimal << endl;

    return 0;
}