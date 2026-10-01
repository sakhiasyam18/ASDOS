#include <iostream>
using namespace std;

void displayMessage(string name)
{
    cout << "Hello, " << name << endl;
}

double multiply(int a, int b, double c)
{
    return a * b / c;
}

int main()
{
    displayMessage("Asyam");

    int hasil = multiply(5, 4,10);

    cout << "Hasil: " << hasil << endl;

    return 0;
}