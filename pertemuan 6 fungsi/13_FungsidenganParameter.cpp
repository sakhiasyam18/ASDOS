#include <iostream>
using namespace std;

void displayMessage(string name)
{
    cout << "Hello, " << name << endl;
}

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    displayMessage("Asyam");

    int hasil = multiply(5, 4);

    cout << "Hasil: " << hasil << endl;

    return 0;
}