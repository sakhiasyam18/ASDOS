#include <iostream>
using namespace std;

// Prototipe fungsi: Memberitahu komputer bahwa ada fungsi 'tukar' di bawah nanti
void tukar(int a, int b);

int main()
{
    int a = 55, b = 77; // Variabel asli di dalam "Kamar Utama"

    // 1. Cetak nilai asli sebelum ditukar
    cout << "Sebelum fungsi dipanggil:" << endl;
    cout << "main() : a = " << a << endl;
    cout << "main() : b = " << b << endl;

    cout << "\n-- Memanggil fungsi tukar(a, b) --\n"
         << endl;

    // 2. Memanggil fungsi (Hanya mengirim FOTOKOPIAN nilainya saja)
    tukar(a, b);

    cout << "\n-- Kembali ke main() --\n"
         << endl;

    // 3. Cetak nilai asli setelah fungsi selesai (Kamarnya sudah ditutup)
    cout << "Setelah fungsi selesai:" << endl;
    cout << "main() : a = " << a << endl;
    cout << "main() : b = " << b << endl;

    return 0;
}

// Definisi fungsi ("Kamar Servis")
void tukar(int a, int b)
{
    int temp;

    // Proses menukar nilai (Tapi yang ditukar cuma fotokopiannya!)
    temp = a;
    a = b;
    b = temp;

    // Cetak nilai dari dalam Kamar Servis
    cout << "Di dalam tukar() : a = " << a << endl;
    cout << "Di dalam tukar() : b = " << b << endl;
}