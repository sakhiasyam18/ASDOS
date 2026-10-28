#include <iostream>
using namespace std;

void tukar(int &a, int &b);
int main()
{
    int a = 55, b = 77;
    cout << "main() : a = " << a << endl;
    cout << "main() : b = " << b << endl;
    tukar(a, b);
    cout << "main() : a = " << a << endl;
    cout << "main() : b = " << b << endl;
}
void tukar(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "tukar() : a = " << a << endl;
    cout << "tukar() : b = " << b << endl;
}
