#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "UKR");
    int x, y;

    cout << "Введiть x: ";
    cin >> x;

    if (x > -10)
    {
        if (x <= -5)
        {
            y = x * x * x - 6;
            cout << "y = " << y;
        }
        else if (x > 5)
        {
            if (x <= 15)
            {
                y = x * x * x - 6;
                cout << "y = " << y;
            }
            else if (x >= 25)
            {
                y = 2 * x * x * x - 3 * x + 2;
                cout << "y = " << y;
            }
            else
                cout << "Error: x не входить в область визначення";
        }
        else
            cout << "Error: x не входить в область визначення";
    }
    else
        cout << "Error: x не входить в область визначення";
    return 0;
}