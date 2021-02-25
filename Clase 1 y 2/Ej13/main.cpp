#include <iostream>

using namespace std;

int main() {

    float   valorIngr = 0,
            maximoNeg = 0,
            minimoPos = 0,
            minimoRang = 0,
            promedio = 0,
            ciclos = 0;

    do {
        std::cout << "Ingrese un valor (0 para salir): " << std::endl;
        std::cin >> valorIngr;
        promedio += valorIngr;
        
        if (valorIngr == NULL) break;

        if (valorIngr < 0) {
            maximoNeg = valorIngr;
            ciclos++;
        } else if (valorIngr > 0) {
            minimoPos = valorIngr;
            ciclos++;
        }
        if ((valorIngr > -17.3 && valorIngr < 26.9) && valorIngr < minimoRang) minimoRang = valorIngr;
    } while (true);

    if (ciclos != 0) {
        std::cout << "El menor valor positivo es: " << minimoPos << std::endl;
        std::cout << "El mayor valor negativo es: " << maximoNeg << std::endl;
        std::cout << "El valor minimo entre -17.3 y 26.9 es: " << minimoRang << std::endl;
        std::cout << "El promedio de todos los valores ingresados es: " << promedio / ciclos << std::endl;
    }

    return 0;
}