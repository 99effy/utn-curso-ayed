#include <iostream>

using namespace std;

int main() {

    int ladoA,
        ladoB,
        ladoC,
        coincidencias = 0;

        cout << "Ingrese un lado A del triángulo: " << endl;
        cin >> ladoA;
        cout << "Ingrese un lado B del triángulo: " << endl;
        cin >> ladoB;
        cout << "Ingrese un lado C del triángulo: " << endl;
        cin >> ladoC;

    while ( (ladoA > ladoB + ladoC) || (ladoB > ladoA + ladoC) || (ladoC > ladoA + ladoB) ) {
        cout << "Los valores ingresados no forman un triángulo." << endl;
        cout << "Ingrese un lado A del triángulo: " << endl;
        cin >> ladoA;
        cout << "Ingrese un lado B del triángulo: " << endl;
        cin >> ladoB;
        cout << "Ingrese un lado C del triángulo: " << endl;
        cin >> ladoC;
    }

    if (ladoA == ladoB) coincidencias++;
    if (ladoB == ladoC) coincidencias++;
    if (ladoC == ladoA) coincidencias++;

    switch (coincidencias) {
    case 1: cout << "El triángulo es isósceles." << endl;
            break;

    case 2: cout << "El triángulo es equilátero." << endl;
            break;
    
    default: cout << "El triángulo es escaleno." << endl;
            break;
    }

    return 0;
}