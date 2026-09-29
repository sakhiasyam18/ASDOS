#include <iostream>
using namespace std;

int main()
{
    int nilai;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    string grade = (nilai >= 90) ? "Grade A" : (nilai >= 80) ? "Grade B"
                                           : (nilai >= 70)   ? "Grade C"
                                           : (nilai >= 60)   ? "Grade D"
                                                             : "Grade E";

    cout << "Hasil: " << grade << endl;

    return 0;
}