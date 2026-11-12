#include <iostream>
using namespace std;

// Fungsi dengan teknik Pass by Reference (&) agar nilai asli di fungsi main ikut berubah
void tambahElemen(int *&array, int &n, int elemenBaru)
{
    // 1. Alokasi array baru dengan ukuran lebih besar (n + 1)
    int *temp = new int[n + 1];

    // 2. Salin elemen dari array lama ke array baru
    for (int i = 0; i < n; i++)
    {
        temp[i] = array[i];
    }

    // 3. Tambahkan elemen baru di indeks paling ujung
    temp[n] = elemenBaru;

    // 4. Hapus array lama dan ganti dengan array baru untuk mencegah memory leak
    delete[] array;
    array = temp;

    // 5. Tambahkan catatan ukuran array
    n++;
}

int main()
{
    int n = 3;

    // Inisialisasi array dinamis dengan nilai awal [1, 2, 3]
    int *array = new int[n]{1, 2, 3};

    cout << "Array sebelum penambahan: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    // Memanggil fungsi untuk menambahkan angka 4 ke dalam array
    tambahElemen(array, n, 4);

    cout << "Array setelah penambahan: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    // Hapus memori sebelum program ditutup
    delete[] array;

    return 0;
}