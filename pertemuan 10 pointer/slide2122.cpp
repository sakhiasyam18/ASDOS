#include <iostream>
using namespace std;

int main()
{
    int skor = 100;     // Variabel biasa (kotak data murni)
    int *ptr1 = &skor;  // Pointer tingkat 1 (menyimpan alamat 'skor')
    int **ptr2 = &ptr1; // Pointer tingkat 2 (menyimpan alamat 'ptr1')

    cout << "=== ISI DARI MASING-MASING KOTAK ===" << endl;
    cout << "1. Isi variabel skor \t = " << skor << endl;
    cout << "2. Isi variabel ptr1 \t = " << ptr1 << " (Ini adalah alamat skor)" << endl;
    cout << "3. Isi variabel ptr2 \t = " << ptr2 << " (Ini adalah alamat ptr1)" << endl;

    cout << "\n=== MARI KITA BONGKAR PAKAI BINTANG (*) ===" << endl;

    // Membongkar ptr1 dengan satu bintang
    cout << "4. *ptr1 \t\t = " << *ptr1 << " (Membongkar ptr1, langsung dapat 100)" << endl;

    // Membongkar ptr2 dengan satu bintang
    cout << "5. *ptr2 \t\t = " << *ptr2 << " (Membongkar ptr2, eh cuma dapat alamat ptr1)" << endl;

    // Membongkar ptr2 dengan DUA bintang
    cout << "6. **ptr2 \t\t = " << **ptr2 << " (Bongkar 2 kali, baru sukses dapat 100!)" << endl;

    return 0;
}