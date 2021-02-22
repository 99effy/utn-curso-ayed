#include <iostream>

int main() {

    short   contador = 1,
            contadorMenor = 1,
            contadorMayor = 1;
    long    ingresado = 0,
            menor = 0,
            mayor = 0;

    std::cout << "Ingrese un valor (0 para salir): " << std::endl;
    std::cin >> ingresado;
    menor = ingresado;
    mayor = ingresado;

    do {
        std::cout << "Ingrese un valor (0 para salir): " << std::endl;
        std::cin >> ingresado;
        
        if (!ingresado) {
            break;
        } else if (ingresado > mayor) {
            mayor = ingresado;
            contadorMayor = contador;
        } else if (ingresado < menor) {
            menor = ingresado;
            contadorMenor = contador;
        }
        contador++;
    } while (ingresado);

    std::cout << "El mayor valor, \"" << mayor << "\" fue ingresado en el ciclo numero " << contadorMayor << "." << std::endl;
    std::cout << "El menor valor, \"" << menor << "\" fue ingresado en el ciclo numero " << contadorMenor << "." << std::endl;

    return 0;
}