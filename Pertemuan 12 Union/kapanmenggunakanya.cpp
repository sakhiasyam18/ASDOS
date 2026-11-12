#include <iostream>
#include <string>
using namespace std;

// Union ini total ukurannya mentok di 4 byte
union DataSensor
{
    float suhu;     // 4 byte
    int kelembaban; // 4 byte
    char status;    // 1 byte
};

// Fungsi bantuan untuk simulasi pengiriman internet
void kirimKeServer(string jenis, float nilai)
{
    cout << ">> [WIFI TX] Mengirim " << jenis << " : " << nilai << " ke database." << endl;
}
void kirimStatus(char kode)
{
    cout << ">> [WIFI TX] Mengirim Status Mesin : " << kode << " ke database." << endl;
}

int main()
{
    // Kita hanya mengalokasikan 1 variabel union sebesar 4 byte di RAM
    DataSensor sensor;

    cout << "=== SIMULASI IOT: SIKLUS PAKAI-BUANG UNION ===\n"
         << endl;

    // --- DETIK KE-1: FOKUS SUHU ---
    cout << "[Detik 1] Sensor mendeteksi cuaca panas..." << endl;
    sensor.suhu = 32.5;                     // 1. Simpan data ke memori union
    kirimKeServer("Suhu (C)", sensor.suhu); // 2. Langsung kirim!
    // Di titik ini, tugas suhu SELESAI. Kita tidak butuh data ini lagi di RAM.

    // --- DETIK KE-2: FOKUS KELEMBABAN ---
    cout << "\n[Detik 2] Sensor mendeteksi tanah kering..." << endl;
    sensor.kelembaban = 45;                             // 1. Data suhu tadi RESMI DIHANCURKAN/DITIMPA
    kirimKeServer("Kelembaban (%)", sensor.kelembaban); // 2. Langsung kirim!
    // Di titik ini, tugas kelembaban SELESAI.

    // --- DETIK KE-3: FOKUS STATUS ---
    cout << "\n[Detik 3] Pengecekan kondisi mesin..." << endl;
    sensor.status = 'A';        // 1. Data kelembaban RESMI DIHANCURKAN
    kirimStatus(sensor.status); // 2. Langsung kirim!
    // Siklus selesai.

    return 0;
}