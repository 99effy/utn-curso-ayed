#include <iostream>

int main() {

    float   valorIngresado,
            valoresMinimos = 0,
            valoresSegundos = 0,
            valoresTerceros = 0,
            valoresCuartos = 0;

    do {
        std::cout << "Ingrese un sueldo (0 para salir): " << std::endl;
        std::cin >> valorIngresado;
        if (valorIngresado > 0 && valorIngresado < 1520) {
            valoresMinimos++;
        } else if (valorIngresado >= 1520 && valorIngresado < 2780) {
            valoresSegundos++;
        } else if (valorIngresado >=2780 && valorIngresado < 5999) {
            valoresTerceros++;
        } else if (valorIngresado >= 5999) {
            valoresCuartos++;
        } else {
            std::cout << "Valor ingresado invalido." << std::endl;
        }
    } while (valorIngresado);

    std::cout << "Monto de sueldos menores a $1520: " << valoresMinimos << std::endl;
    std::cout << "Monto de sueldos mayores o iguales a $1520 y menores a $2780: " << valoresSegundos << std::endl;
    std::cout << "Monto de sueldos mayores o iguales a $2780 y menores a $5999: " << valoresTerceros << std::endl;
    std::cout << "Monto de sueldos mayores a $5999: " << valoresCuartos << std::endl;

    return 0;
}