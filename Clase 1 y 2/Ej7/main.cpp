#include <iostream>

typedef char nombre[20];

int main() {

    float   parteDecimal,
            primerCorredor = 0,
            segundoCorredor = 0,
            tercerCorredor = 0,
            cuartoCorredor = 0,
            quintoCorredor = 0;
    nombre  nomPrimerCorredor,
            nomSegundoCorredor,
            nomTercerCorredor,
            nomCuartoCorredor,
            nomQuintoCorredor;
    short   i,
            corredorMasVeloz = 1;
    int     parteEntera;

    std::cout << "Ingrese el tiempo que tardó el primer corredor en finalizar la carrera (mm.ss): " << std::endl;
    std::cin >> primerCorredor;
    parteEntera = primerCorredor;
    parteDecimal = primerCorredor - parteEntera;
    primerCorredor = (parteEntera * 60) + (parteDecimal * 100);
    primerCorredor = 1500 / primerCorredor;
    std::cout << "Ingrese el nombre del corredor: " << std::endl;
    std::cin.ignore();
    std::cin.getline(nomPrimerCorredor, 20);

    for (i = 2; i < 6; i++) {
        switch (i)
        {
        case 2:
            std::cout << "Ingrese el tiempo que tardó el siguiente corredor en finalizar la carrera (mm.ss): " << std::endl;
            std::cin >> segundoCorredor;
            parteEntera = segundoCorredor;
            parteDecimal = segundoCorredor - parteEntera;
            segundoCorredor = (parteEntera * 60) + (parteDecimal * 100);
            segundoCorredor = 1500 / segundoCorredor;
            std::cout << "Ingrese el nombre del corredor: " << std::endl;
            std::cin.ignore();
            std::cin.getline(nomSegundoCorredor, 20);
            if (segundoCorredor > primerCorredor) corredorMasVeloz = i;
            break;
        case 3:
            std::cout << "Ingrese el tiempo que tardó el siguiente corredor en finalizar la carrera (mm.ss): " << std::endl;
            std::cin >> tercerCorredor;
            parteEntera = tercerCorredor;
            parteDecimal = tercerCorredor - parteEntera;
            tercerCorredor = (parteEntera * 60) + (parteDecimal * 100);
            tercerCorredor = 1500 / tercerCorredor;
            std::cout << "Ingrese el nombre del corredor: " << std::endl;
            std::cin.ignore();
            std::cin.getline(nomSegundoCorredor, 20);
            if (tercerCorredor > segundoCorredor) corredorMasVeloz = i;
            break;
        case 4:
            std::cout << "Ingrese el tiempo que tardó el siguiente corredor en finalizar la carrera: (mm.ss)" << std::endl;
            std::cin >> cuartoCorredor;
            parteEntera = cuartoCorredor;
            parteDecimal = cuartoCorredor - parteEntera;
            cuartoCorredor = (parteEntera * 60) + (parteDecimal * 100);
            cuartoCorredor = 1500 / cuartoCorredor;
            std::cout << "Ingrese el nombre del corredor: " << std::endl;
            std::cin.ignore();
            std::cin.getline(nomCuartoCorredor, 20);
            if (cuartoCorredor > tercerCorredor) corredorMasVeloz = i;
            break;
        case 5:
            std::cout << "Ingrese el tiempo que tardó el siguiente corredor en finalizar la carrera: (mm.ss)" << std::endl;
            std::cin >> quintoCorredor;
            parteEntera = quintoCorredor;
            parteDecimal = quintoCorredor - parteEntera;
            quintoCorredor = (parteEntera * 60) + (parteDecimal * 100);
            quintoCorredor = 1500 / quintoCorredor;
            std::cout << "Ingrese el nombre del corredor: " << std::endl;
            std::cin.ignore();
            std::cin.getline(nomQuintoCorredor, 20);
            if (quintoCorredor > cuartoCorredor) corredorMasVeloz = i;
            break;
        
        default:
            std::cout << "Rompiste algo." << std::endl;
            return 0;
        }
    }

    switch (corredorMasVeloz)
    {
    case 1:
        std::cout << "El corredor más veloz fue " << nomPrimerCorredor << " habiendo corrido " << primerCorredor << " metros por segundo!" << std::endl; 
        break;
    case 2:
        std::cout << "El corredor más veloz fue " << nomSegundoCorredor << " habiendo corrido " << segundoCorredor << " metros por segundo!" << std::endl; 
        break;
    case 3:
        std::cout << "El corredor más veloz fue " << nomTercerCorredor << " habiendo corrido " << tercerCorredor << " metros por segundo!" << std::endl; 
        break;
    case 4:
        std::cout << "El corredor más veloz fue " << nomCuartoCorredor << " habiendo corrido " << cuartoCorredor << " metros por segundo!" << std::endl; 
        break;
    default:
        std::cout << "El corredor más veloz fue " << nomQuintoCorredor << " habiendo corrido " << quintoCorredor << " metros por segundo!" << std::endl; 
        break;    
    }

    return 0;
}