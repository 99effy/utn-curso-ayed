#include <iostream>
#include <string.h>

short fechaMayorMenor(int &mayorFecha, int &menorFecha);

typedef char nombre[40];

int main() {
    short   resultadoMayorMenor;
    int     edadMenor = 0,
            edadMayor = 0;
    nombre  nombreIngresado,
            nombreMayor,
            nombreMenor;

    while (true) {

        std::cout << "Ingrese nombre: " << std::endl;
        std::cin.getline(nombreIngresado, sizeof(nombreIngresado));

        if (!strcmp(nombreIngresado, "FIN")) break;

        resultadoMayorMenor = fechaMayorMenor(edadMayor, edadMenor);

        switch (resultadoMayorMenor)
        {
        case 1:
            strcpy(nombreMayor, nombreIngresado);
            break;
        case -1:
            strcpy(nombreMenor, nombreIngresado);
            break;
        default:
            break;
        }
        
        std::cin.ignore();
    }

    std::cout << "La persona con mayor edad es " << nombreMenor << ", habiendo nacido en la fecha " << edadMenor << '.' << std::endl;
    std::cout << "La persona con menor edad es " << nombreMayor << ", habiendo nacido en la fecha " << edadMayor << '.' << std::endl;
}

short fechaMayorMenor(int &mayorFecha, int &menorFecha) {
    int     anho,
            mes,
            dia,
            fechaIngresada;
    bool    anhoBisiesto;

    do {
        std::cout << "Ingrese una fecha de cumpleanhos en formato AAAAMMDD: " << std::endl;
        std::cin >> fechaIngresada;
    } while (fechaIngresada < 10000 || fechaIngresada > 99999999);

    anho = fechaIngresada / 10000;
    mes = (fechaIngresada - (anho * 10000)) / 100;
    dia = fechaIngresada - (anho * 10000) - (mes * 100);
    
    if (anho % 4 == 0 && (anho % 100 != 0 || anho % 400 == 0)) anhoBisiesto = true;

    while ( ((!anhoBisiesto && (mes == 2 && dia > 28)) || (anhoBisiesto && (mes == 2 && dia > 29)) || (mes > 12 || dia > 31)) ) {
    
        do {
            std::cout << "Fecha errónea, ingrese una fecha en formato AAAAMMDD entre 99999999 y 10000: " << std::endl;
            std::cin >> fechaIngresada;
        } while (fechaIngresada < 10000 || fechaIngresada > 99999999);

        anho = fechaIngresada / 10000;
        mes = (fechaIngresada - (anho * 10000)) / 100;
        dia = fechaIngresada - (anho * 10000) - (mes * 100);

        if (anho % 4 == 0 && (anho % 100 != 0 || anho % 400 == 0)) anhoBisiesto = true;
    }   

    if (fechaIngresada > mayorFecha) {
        mayorFecha = fechaIngresada;
        return 1;
    } else if (fechaIngresada < menorFecha) {
        menorFecha = fechaIngresada;
        return -1;
    } else {
        return 0;
    }
}
