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
    double mult = 1;
    double sum = 0;
    double pwr = 1;
    operations += 5; // int(t_n), присвоювання n, mult, sum, pwr 
    double denom;

    for (int i = 1; i <= n; i++) {
        operations += 2; // i = 1, i <= n

        mult *= (i + 1);
        pwr *= 2;
        operations += 2; // i + 1, множення x 2

        denom = (pwr + 1) * (pwr + 1);
        operations += 4; // pwr + 1 - x2, множення, присвоювання denom

        sum += (mult / denom);
        operations += 6; // ділення, додавання, присвоювання sum, i++, перехід на наступну ітерацію, i <= n
    }

    cout << "S = " << fixed << setprecision(7) << sum << endl;
    cout << "Кiлькiсть операцiй = " << operations << endl;

    return 0;
}