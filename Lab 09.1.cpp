

#include <iostream>
#include <cmath>
#include <iomanip>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{
    cout << "x_p = "; cin >> x_p;
    cout << "x_k = "; cin >> x_k;
    cout << "dx = "; cin >> dx;
    cout << "e = "; cin >> e;
    cout << endl;

    cout << setw(10) << "x"
        << setw(15) << "Suma"
        << setw(15) << "arctg(x)"
        << setw(10) << "n" << endl;

    x = x_p;

    while (x <= x_k)
    {
        sum();                  // виклик процедури обчислення суми

        cout << fixed << setprecision(6)
            << setw(10) << x
            << setw(15) << s
            << setw(15) << atan(x)
            << setw(10) << n << endl;

        x += dx;
    }

    return 0;
}
