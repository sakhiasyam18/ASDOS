#include <iostream>
using namespace std;

double calculateArea(double radius);

int main()
{
    cout << calculateArea(10);

    return 0;
}
double calculateArea(double radius)
{
    return 3.14 * radius * radius;
}