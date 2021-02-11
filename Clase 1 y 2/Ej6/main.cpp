#include <iostream>

using namespace std;

int main() {

    short edad;

    cout << "Ingrese su edad: " << endl;
    cin >> edad;

    while (edad <= 0) {
        cout << "Valor erróneo, ingrese una edad valida: " << endl;
        cin >> edad;
    }

    if (edad <= 12) {
        cout << "MENOR" << endl;
    } else if (edad <= 18) {
        cout << "CADETE" << endl;
    } else if (edad <= 26) {
        cout << "JUVENIL" << endl;
    } else cout << "MAYOR" << endl;

    return 0;
}