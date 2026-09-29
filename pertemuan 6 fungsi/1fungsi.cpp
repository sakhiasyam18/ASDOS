#include <iostream>
using namespace std;

// 1. Fungsi untuk input data
void inputData()
{
    cout << "Data mahasiswa berhasil dimasukkan." << endl;
}

// 2. Fungsi untuk menghitung nilai
void hitungNilai()
{
    cout << "Nilai sedang dihitung..." << endl;
}

// 3. Fungsi untuk mengecek kelulusan
void cekKelulusan()
{
    cout << "Status: Lulus" << endl;
}

// 4. Fungsi untuk menampilkan hasil
void tampilkanHasil()
{
    cout << "Hasil akhir ditampilkan." << endl;
}

// 5. Fungsi utama
int main()
{

    hitungNilai();
    cekKelulusan();

    inputData();
    tampilkanHasil();

    return 0;
}