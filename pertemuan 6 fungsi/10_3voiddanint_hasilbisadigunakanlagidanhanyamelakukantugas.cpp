#include <iostream>
using namespace std;

int tambah()
{
    return 10 + 20;
}

int main()
{
    int hasil = tambah();

    cout << "Hasil: " << hasil << endl;

    int dikaliDua = hasil * 2;

    cout << "Dikali 2: " << dikaliDua << endl;

    return 0;
}