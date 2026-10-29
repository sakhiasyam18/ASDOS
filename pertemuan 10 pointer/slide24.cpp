#include <iostream>
using namespace std;

// Perhatikan ada tanda & di sini! (Pass by Reference)
void tukar(int &a, int &b);

int main()
{
    int a = 55, b = 77;

    cout << "Sebelum fungsi dipanggil:" << endl;
    cout << "main() : a = " << a << endl;
    cout << "main() : b = " << b << endl;

    cout << "\n-- Memanggil fungsi tukar(a, b) dengan tanda & --\n"
         << endl;

    tukar(a, b); // Kelihatan sama, tapi di belakang layar dia mengirim jalur langsung!

    cout << "\n-- Kembali ke main() --\n"
         << endl;

    // Lihat hasilnya di sini nanti!
    cout << "Setelah fungsi selesai:" << endl;
    cout << "main() : a = " << a << endl;
    cout << "main() : b = " << b << endl;

    return 0;
}

// Di sini juga ada tanda &
void tukar(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "Di dalam tukar() : a = " << a << endl;
    cout << "Di dalam tukar() : b = " << b << endl;
}