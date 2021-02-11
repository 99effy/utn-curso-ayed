#include <iostream>

using namespace std;

int main() {

    int ladoA,
        ladoB,
        ladoC;

    cout << "Ingrese un valor A: " << endl;
    cin >> ladoA;
    cout << "Ingrese un valor B: " << endl;
    cin >> ladoB;
    cout << "Ingrese un valor C: " << endl;
    cin >> ladoC;

    if ( (ladoA > ladoB + ladoC) || (ladoB > ladoA + ladoC) || (ladoC > ladoA + ladoB) ) {
        cout << "Los valores ingresados no forman un triángulo." << endl;
    } else {
        cout << "Los valores ingresados forman un triángulo." << endl;
    }

    return 0;
}