#include <iostream>
#include <cmath>

using namespace std;

float liczba;

int main()
{
    cout << "Podaj liczbe: " << endl;
    cin >> liczba;

    cout << "round(): " << round(liczba) << endl;   // zaokraglanie domyslne 0..4 / 5..9
    cout << "ceil(): " << ceil(liczba) << endl;     // zaokraglanie do wiekszej wartosci = wieksza liczba
    cout << "floor(): " << floor(liczba) << endl;   // zaokraglanie do mniejszej wartosci = mniejsza liczba
    cout << "trunc(): " << trunc(liczba) << endl;   // obcinanie wartosci po przecinku

    return 0;
}
