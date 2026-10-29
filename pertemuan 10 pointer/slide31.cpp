#include <iostream>
using namespace std;

// Fungsi main dengan "telinga" untuk mendengar pesanan dari Terminal
int main(int argc, char *argv[])
{
    // Menampilkan jumlah total kata yang ditangkap
    cout << "Jumlah total kata (argc) = " << argc << endl;
    cout << "----------------------------------" << endl;

    // Mengabsen dan mencetak isi laci pesanan satu per satu
    for (int i = 0; i < argc; i++)
    {
        cout << "argv[" << i << "] = " << argv[i] << endl;
    }

    return 0;
}