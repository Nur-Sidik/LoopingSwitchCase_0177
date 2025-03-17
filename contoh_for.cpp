#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    int PerulanganWhile = 0;
    int PerulanganDo = 0;

    cout << "Perulangan dengan for pencacah naik" << endl;
    for (n = 0; n < 5; n++)
    {
        cout << "Nilai n; " << n << "Selamat Datang" << endl;
    }
    cout << "Nilai n terakhir = " << n << endl;
    cout << endl;
    
    cout << "Perulangan for pencacah turun" << endl;

    for (n = 5; n > 0; n--)
    {
        cout << "Nilai n; " << n << "Selamat Datang" << endl;
    }
    cout << "Nilai n terakhir = " << n << endl;
    cout << endl;

}
