#include <iostream>

float calcularPorcentajeDiferencia(int A, int B);

int main() {
    int     valorA,
            valorB;

    std::cout << "Ingrese un valor A: " << std::endl;
    std::cin >> valorA;
    std::cout << "Ingrese un valor B: " << std::endl;
    std::cin >> valorB;

    std::cout << "El valor resultado es: " << calcularPorcentajeDiferencia(valorA, valorB) << std::endl;

    return 0;
}

float calcularPorcentajeDiferencia(int A, int B) {
    return (((B - A) * 100) / (A + B));
}
