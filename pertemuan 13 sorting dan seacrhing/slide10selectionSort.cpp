#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    // Loop untuk batas awal array yang belum terurut
    for (int i = 0; i < n - 1; i++)
    {

        // Asumsikan elemen pertama yang belum terurut adalah yang terkecil
        int min_idx = i;

        // Cari elemen yang lebih kecil lagi di sisa array sebelah kanannya
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j; // Update indeks nilai terkecil yang baru
            }
        }

        // Tukar elemen terkecil yang ditemukan dengan elemen pertama yang belum terurut
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int data[] = {5, 1, 8, 4, 9, 6, 7, 2, 3};
    int n = sizeof(data) / sizeof(data[0]);

    selectionSort(data, n);

    cout << "Hasil Selection Sort: ";
    for (int i = 0; i < n; i++)
        cout << data[i] << " ";
    return 0;
}