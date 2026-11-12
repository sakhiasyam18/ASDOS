#include <iostream>
using namespace std;

int main()
{
    cout << "=== DEMO SLIDE 27: ENUM (HARI) ===" << endl;

    // 1. Mendefinisikan Enum (Sistem otomatis memberi nilai: Senin=0, Selasa=1, dst)
    enum nama_hari
    {
        Sabtu,
        Selasa,
        Rabu,

        Jumat,
        Senin,
        Minggu
    };

    // 2. Membuat variabel berdasarkan enum tersebut
    nama_hari hari1, hari2;

    // 3. Memberikan nilai
    hari1 = Senin; // Di memori, hari1 sekarang bernilai 0
    hari2 = Jumat; // Di memori, hari2 sekarang bernilai 4

    // 4. Operasi matematika
    int selisih = hari2 - hari1;

    // 5. Menampilkan hasil (Typo tanda kutip dari slide sudah diperbaiki di sini)
    cout << "Hari 1 (Senin) bernilai : " << hari1 << endl;
    cout << "Hari 2 (Jumat) bernilai : " << hari2 << endl;
    cout << "Selisih hari            = " << selisih << endl;

    return 0;
}