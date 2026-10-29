#include <iostream>
using namespace std;

// Fungsi mesin fotokopi
void strkiri(char *hasil, char *st, int n)
{
    for (int i = 0; i < n; i++)
    {
        *(hasil + i) = *(st + i); // Menyalin huruf satu per satu dengan menggeser pointer
    }
    *(hasil + n) = '\0'; // Menambahkan karakter NULL ('\0') di akhir sebagai tanda STOP
}

int main()
{
    char st[] = "Pemrograman C++"; // Teks (string) asli
    char hasil[10];                // Kertas kosong berukuran 20 kotak
    int n = 18;                    // Jumlah karakter yang mau difotokopi dari kiri

    // Mesin fotokopi dipanggil untuk bekerja
    strkiri(hasil, st, n);

    // Mencetak hasil akhir
    cout << "Hasil pemotongan string: " << hasil << endl;

    return 0;
}