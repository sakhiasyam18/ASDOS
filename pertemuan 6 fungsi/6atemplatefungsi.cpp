#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int angka[] = {5, 2, 8, 1, 4};
    char nama[] = "Asyam";
    string teks = "Hello";

    cout << sqrt(25) << endl;
    cout << pow(2, 3) << endl;
    cout << round(4.6) << endl;

    cout << strlen(nama) << endl;

    cout << max(10, 20) << endl;
    cout << min(10, 20) << endl;

    sort(angka, angka + 5);

    for (int i = 0; i < 5; i++)
    {
        cout << angka[i] << " ";
    }

    cout << endl;

    cout << teks.length() << endl;

    return 0;
}