//////////////////////////////////////////////////////////////////////////////
// Lab_9_2.cpp
// Лабораторна робота 09.2
// Варіант 29

#include <iostream>
using namespace std;

// Макроси
#define SQR(x) ((x) * (x))
#define CUBE(x) ((x) * (x) * (x))
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#define PRINT(x) cout << "Rezultat w = " << (x) << endl

// Функція обчислення виразу
double Calculate(double x, double y, double z)
{
    if (z > 5)
        return SQR(MAX(x * CUBE(y), x + z));
    else
        return MIN(x - y * z, x * y + z);
}

int main()
{
    double x, y, z, w;

    cout << "Vvedit x: ";
    cin >> x;

    cout << "Vvedit y: ";
    cin >> y;

    cout << "Vvedit z: ";
    cin >> z;

    w = Calculate(x, y, z);

    PRINT(w);

    return 0;
}