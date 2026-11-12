#include <iostream>
using namespace std;

// Membuat union dengan dua anggota
union Data
{
    int angka;     // Butuh 4 byte
    float desimal; // Butuh 4 byte
};

int main()
{
    Data d; // Mendeklarasikan variabel union bernama 'd'

    cout << "=== DEMO: BENCANA OVERWRITE PADA UNION ===" << endl;

    // LANGKAH 1: Kita simpan nilai ke anggota 'angka'
    d.angka = 10;
    cout << "\n[1] Memasukkan nilai 10 ke 'd.angka'" << endl;
    cout << "Isi d.angka   = " << d.angka << endl; // Output pasti 10

    // LANGKAH 2: Kita paksa simpan nilai ke anggota 'desimal'
    d.desimal = 3.14;
    cout << "\n[2] Memasukkan nilai 3.14 ke 'd.desimal'" << endl;
    cout << "Isi d.desimal = " << d.desimal << endl; // Output pasti 3.14

    // LANGKAH 3: Mari kita cek nasib 'angka' setelah lokernya direbut 'desimal'
    cout << "\n[3] Mengecek kembali isi 'd.angka' sekarang..." << endl;

    // Ini akan mencetak angka acak (garbage value) karena binernya sudah hancur!
    cout << "Isi d.angka   = " << d.angka << "  <-- (NILAI HANCUR/TIDAK VALID!)" << endl;

    return 0;
}