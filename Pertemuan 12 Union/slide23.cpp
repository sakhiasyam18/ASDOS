#include <iostream>
using namespace std;

// Sesuai dengan slide, kita membuat union Data sekaligus variabel d
union Data
{
    int i;
    float f;
    char c;
} d;

int main()
{
    cout << "=== DEMO SLIDE 23: CARA KERJA UNION ===" << endl;

    // Langkah 1
    d.i = 10;
    cout << d.i << endl; // Output: 10

    // Langkah 2
    d.f = 3.14;
    cout << d.f << endl; // Output: 3.14

    // Langkah 3: Pembuktian langsung (Tambahan untuk presentasi)
    cout << "\n=== CEK STATUS SEKARANG ===" << endl;
    cout << "Isi d.f = " << d.f << " (Masih Aman)" << endl;

    // Nilai dari d.i sekarang tidak valid, karena union hanya menyimpan satu nilai pada satu waktu
    cout << "Isi d.i = " << d.i << " (NILAI HANCUR/TIDAK VALID!)" << endl;

    return 0;
}