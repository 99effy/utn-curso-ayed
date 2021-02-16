#include <iostream>

using namespace std;

int main() {

    string  motivoInfraccion;
    char    gravedadInfraccion;
    int     valorTotalMultaL,
            valorTotalMultaM,
            valorTotalMultaG,
            cantidadMultasGraves,
            i,
            j,
            tipoInfraccion,
            valorInfraccion,
            infraccionCritica;

    cout << "Ingrese la cantidad de infracciones (0 para salir): " << endl;
    cin >> i;

    if (i = 0) return 1;
    
    while (i < 0) { 
        cout << "Cantidad de infracciones errónea, ingrese un número válido: " << endl;
        cin >> i;
    }

    for (j = 0; j < i; j++) {
        cout << "Ingrese tipo de infracción: " << endl;
        cin >> tipoInfraccion;
        
        while (tipoInfraccion < 1 || tipoInfraccion > 4) {
            cout << "Valor erróneo, ingrese un número entre 1 y 4: " << endl;
            cin >> tipoInfraccion;
        }

        cout << "Ingrese motivo de infracción: " << endl;
        cin >> motivoInfraccion;

        while (motivoInfraccion == "") {
            cout << "Motivo de infracción invalido, ingrese algún motivo: " << endl;
            cin >> motivoInfraccion;
        }

        cout << "Ingrese valor de la multa: " << endl;
        cin >> valorInfraccion;
        
        while (valorInfraccion < 0) {
            cout << "Valor de multa erróneo, ingrese un valor igual o mayor a 0: " << endl;
            cin >> valorInfraccion;
        }

        cout << "Ingrese gravedad de la infracción(L, M o G): " << endl;
        cin >> gravedadInfraccion;

        while (gravedadInfraccion != 'L' + gravedadInfraccion != 'M' + gravedadInfraccion != 'G' 
        + gravedadInfraccion != 'l' + gravedadInfraccion != 'm' + gravedadInfraccion != 'g') {
            cout << "Valor erróneo de gravedad, ingrese 'L', 'M' o 'G': " << endl;
            cin >> gravedadInfraccion;
        }

        if ((tipoInfraccion == 3 || tipoInfraccion == 4) && 
        (gravedadInfraccion == 'G' || gravedadInfraccion == 'g')) infraccionCritica++;

        if (gravedadInfraccion == 'L' || gravedadInfraccion == 'l') {
            valorTotalMultaL += valorInfraccion;
        } else if (gravedadInfraccion == 'M' || gravedadInfraccion == 'm') {
            valorTotalMultaM += valorInfraccion;
        } else if (gravedadInfraccion == 'G' || gravedadInfraccion == 'g') {
            valorTotalMultaG += valorInfraccion;
        }
    }
    
    cout << "Valor total a pagar por multas L: " << valorTotalMultaL << endl;
    cout << "Valor total a pagar por multas M: " << valorTotalMultaM << endl;
    cout << "Valor total a pagar por multas G: " << valorTotalMultaG << endl;

    if (infraccionCritica > 3) cout << "CLAUSURAR FÁBRICA. Cantidad de infracciones críticas sobre el límite." << endl;

    return 0;

}