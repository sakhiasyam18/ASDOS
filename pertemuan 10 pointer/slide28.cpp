#include <iostream>
using namespace std;

// Prototipe fungsi: memberi tahu sistem bahwa fungsi ini ada di bawah
char *nama_bulan(int n);

int main()
{
    int bln;
    cout << "Bulan [1..12] : ";
    cin >> bln;

    // Memanggil fungsi nama_bulan dan langsung mencetak string dari alamat yang dikembalikan
    cout << nama_bulan(bln) << endl;

    return 0; // Menandakan program selesai dengan sukses
}

// Definisi fungsi: isi logika aslinya
char *nama_bulan(int n)
{
    // Lemari memori statis berisi daftar alamat teks
    static char *bulan[] = {
        "Kode bulan salah", // indeks 0
        "Januari",          // indeks 1
        "Februari",         // indeks 2
        "Maret",            // indeks 3
        "April",            // indeks 4
        "Mei",              // indeks 5
        "Juni",             // indeks 6
        "Juli",             // indeks 7
        "Agustus",          // indeks 8
        "September",        // indeks 9
        "Oktober",          // indeks 10
        "November",         // indeks 11
        "Desember"          // indeks 12
    };

    // Mengecek angka dan mengembalikan pointer (alamat) teks yang sesuai
    return ((n < 1 || n > 12) ? bulan[0] : bulan[n]);
}