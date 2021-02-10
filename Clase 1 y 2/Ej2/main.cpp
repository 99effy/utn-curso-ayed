#include <iostream>

using namespace std;

int main() {

    int numInicial,
        year,
        month,
        day;

    do {
        cout << "Ingrese una fecha en formato AAAAMMDD entre 99999999 y 10000: " << endl;
        cin >> numInicial;
    } while (numInicial < 10000 || numInicial > 99999999);

    year = numInicial / 10000;
    cout << "Año: " << year << endl;
    month = (numInicial - (year * 10000)) / 100;
    cout << "Mes: " << month << endl;
    day = numInicial - (year * 10000) - (month * 100);
    cout << "Día: " << day << endl;

    return 0;
}