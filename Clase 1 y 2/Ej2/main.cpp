#include <iostream>

using namespace std;

int main() {

    int numInicial,
        year,
        month,
        day;

    bool leapYear;

    do {
        cout << "Ingrese una fecha en formato AAAAMMDD entre 99999999 y 10000: " << endl;
        cin >> numInicial;
    } while (numInicial < 10000 || numInicial > 99999999);

    year = numInicial / 10000;
    month = (numInicial - (year * 10000)) / 100;
    day = numInicial - (year * 10000) - (month * 100);
    
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) leapYear = true;

    while ( ((!leapYear && (month == 2 && day > 28)) || (leapYear && (month == 2 && day > 29)) || (month > 12 || day > 31)) ) {
    
        do {
            cout << "Fecha errónea, ingrese una fecha en formato AAAAMMDD entre 99999999 y 10000: " << endl;
            cin >> numInicial;
        } while (numInicial < 10000 || numInicial > 99999999);

        year = numInicial / 10000;
        month = (numInicial - (year * 10000)) / 100;
        day = numInicial - (year * 10000) - (month * 100);

        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) leapYear = true;
    
    }

    cout << "Año: " << year << endl;
    cout << "Mes: " << month << endl;
    cout << "Día: " << day << endl;

    return 0;
}