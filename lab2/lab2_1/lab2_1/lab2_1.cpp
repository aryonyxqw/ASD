#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "UKR");

    long operations = 0;

    double t_n;
    cout << "Введiть n: ";
    cin >> t_n;
    operations++; // присвоювання t_n

    if (t_n != int(t_n) || t_n <= 0) {
        cout << "n має бути натуральним числом";
        return 1;
    }
    operations += 4; // int(t_n), t_n != int(t_n), t_n <= 0, ||

    int n = int(t_n);
    double mult;
    double sum = 0;
    double pwr = 2;
    operations += 4; // int(t_n), присвоювання n, sum і pwr

    for (int i = 1; i <= n; i++) {
        operations += 2; // i = 1, i <= n

        mult = 1;
        operations++; // mult = 1

        for (int j = 1; j <= i; j++) {
            operations += 3; // j = 1, j <= i, j++

            mult *= (j + 1);
            operations += 4; // j + 1, множення, перехід до наступної ітерації, наступне порівняння j <= i
        }

        sum += (mult / ((pwr + 1) * (pwr + 1)));
        operations += 5; // pwr + 1 - x2, множення, ділення, додавання до sum

        pwr *= 2;
        operations+=4; // множення, i++, перехід до наступної ітерації, наступне порівняння i <= n
    }

    cout << "S = " << fixed << setprecision(7) << sum << endl;
    cout << "Кiлькiсть операцiй = " << operations << endl;

    return 0;
}
