#include <iostream>

int main() {

    char    oracion[1024];
    short   contador,
            cantVocales = 0,
            cantPalabras = 1,
            cantLetPalabra = 0,
            cantLetPalabLarga = 0;

    std::cout << "Ingrese un mensaje extenso, el cual termine en un punto: " << std::endl;
    std::cin.getline(oracion, sizeof(oracion));

    while (oracion[0] == NULL) {
        std::cout << "Mensaje erroneo. Ingrese un mensaje extenso, el cual termine en un punto: " << std::endl;
        std::cin.ignore();
        std::cin.getline(oracion, sizeof(oracion));
    }


    for (contador = 0; contador < sizeof(oracion); contador++) {
        switch (oracion[contador])
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cantVocales++;
            break;
        }
        
        cantLetPalabra++;

        if (oracion[contador] == '.') break;
        
        if (oracion[contador] == ' ') {
            cantLetPalabra = 0;
            cantPalabras++;
        }

        if (cantLetPalabra > cantLetPalabLarga) {
            cantLetPalabLarga = cantLetPalabra;
        }
    }

    std::cout << "La cantidad de vocales en la oracion es: " << cantVocales << std::endl;
    std::cout << "La cantidad total de palabras es: " << cantPalabras << std::endl;
    std::cout << "La cantidad de letras en la palabra mas larga es: " << cantLetPalabLarga << std::endl;

    return 0;
}