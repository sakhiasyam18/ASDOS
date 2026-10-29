#include <iostream>
using namespace std;

int main()
{
    // Array berisi kumpulan pointer yang menunjuk ke masing-masing teks hari
    const char *namahari[] = {
        "Senin", "Selasa", "Rabu",
        "Kamis", "Jum'at", "Sabtu", "Minggu"};

    // Mencetak isi array dari indeks ke-0 sampai ke-6
    for (int i = 0; i < 7; i++)
    {
        cout << namahari[i] << endl;
    }

    return 0;
}