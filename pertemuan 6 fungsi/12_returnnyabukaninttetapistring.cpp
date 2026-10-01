#include <iostream>
using namespace std;

string determineGrade(int score)
{
    if (score >= 85)
    {
        return "Sangat Baik";
    }
    else if (score >= 70)
    {
        return "Baik";
    }
    else if (score >= 50)
    {
        return "Cukup";
    }
    else
    {
        return "Perlu Peningkatan";
    }
}

int main()
{
    string hasil = determineGrade(60);

    cout << "Nilai: " << hasil << endl;

    return 0;
}