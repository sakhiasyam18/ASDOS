#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    string nama;
    int posisi;
    int jamKerja;
    int tarif = 0;
    int totalGaji;

    cout << "=== DATA KARYAWAN ===" << endl;

    cout << "Nama karyawan : ";
    cin >> nama;

    cout << "Kode posisi   : ";
    cin >> posisi;

    cout << "Jam kerja     : ";
    cin >> jamKerja;

    // Menentukan tarif berdasarkan posisi
    if (posisi == 1)
    {

        tarif = 15000;
    }
    else if (posisi == 2)
    {

        tarif = 25000;
    }
    else if (posisi == 3)
    {

        tarif = 35000;
    }
    else if (posisi == 4)
    {

        tarif = 50000;
    }
    else if (posisi == 5)
    {

        tarif = 75000;
    }
    else
    {

        cout << "Posisi tidak valid!" << endl;
        return 0;
    }

    // Menghitung gaji
    totalGaji = jamKerja * tarif;

    cout << endl;

    // Menampilkan tabel
    cout << "================================================================" << endl;

    cout << left
         << setw(15) << "Nama"
         << setw(15) << "Posisi"
         << setw(12) << "Jam Kerja"
         << setw(15) << "Tarif/Jam"
         << setw(15) << "Total Gaji"
         << endl;

    cout << "================================================================" << endl;

    cout << left
         << setw(15) << nama;

    if (posisi == 1)
    {
        cout << setw(15) << "Magang";
    }
    else if (posisi == 2)
    {
        cout << setw(15) << "Staf Junior";
    }
    else if (posisi == 3)
    {
        cout << setw(15) << "Staf Senior";
    }
    else if (posisi == 4)
    {
        cout << setw(15) << "Team Leader";
    }
    else
    {
        cout << setw(15) << "Kepala Dept.";
    }

    cout << setw(12) << jamKerja
        << setw(15) << tarif
        << setw(15) << totalGaji
        << endl;

    cout << "================================================================" << endl;

    return 0;
}