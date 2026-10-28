#include <iostream>
using namespace std;

int main()
{
    int var_x = 10;     // Variabel biasa
    int *ptr1 = &var_x; // Menyimpan alamat var_x
    int **ptr2 = &ptr1; // Menyimpan alamat ptr1

    cout << var_x << endl;  // Nilai variabel
    cout << *ptr1 << endl;  // Nilai melalui pointer 1
    cout << **ptr2 << endl; // Nilai melalui pointer 2

    return 0;
}