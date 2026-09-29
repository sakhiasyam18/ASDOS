#include <iostream>
using namespace std;

void halo()
{
    cout << "Hello, World!";
}

class Mahasiswa
{
public:
    void halo()
    {
        cout << "Halo Mahasiswa";
    }
};

class Mahasiswa
{
public:
    // Constructor
    Mahasiswa()
    {
        cout << "Object dibuat" << endl;
    }

    // Destructor
    ~Mahasiswa()
    {
        cout << "Object dihancurkan" << endl;
    }
};