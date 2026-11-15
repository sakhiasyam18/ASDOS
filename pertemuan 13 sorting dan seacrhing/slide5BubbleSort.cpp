#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    // Loop luar untuk mengulang proses sebanyak jumlah data
    for (int i = 0; i < n - 1; i++)
    {

        // Loop dalam untuk membandingkan elemen bersebelahan
        // Batasnya n-i-1 karena elemen paling kanan pasti sudah terurut di setiap iterasi
        for (int j = 0; j < n - i - 1; j++)
        {

            // Bandingkan: Apakah elemen saat ini LEBIH BESAR dari elemen berikutnya?
            if (arr[j] > arr[j + 1])
            {

                // Jika urutan salah, lakukan proses penukaran (Swap)
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int data[] = {5, 9, 6, 4, 7, 2, 3, 1, 8};
    int n = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, n);

    cout << "Hasil Bubble Sort: ";
    for (int i = 0; i < n; i++)
        cout << data[i] << " ";
    return 0;
}