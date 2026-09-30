#include <iostream>
using namespace std;

double calculateArea(double radius)
{
    return 3.14 * radius * radius;
}

int main()
{
    double area = calculateArea(5.0);

    cout << "Luas lingkaran: " << area << endl;

    return 0;
}