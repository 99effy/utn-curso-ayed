/*
**	Alumno: Facundo Garcia Pergañeda
**	Compilado en Debian, usando g++
*/

#include <iostream>

using namespace std;

int main() {

	int	numeroA,
		numeroB;
    cout << "Por favor introduzca un número A: ";
	cin >> numeroA;
	cout << "Por favor introduzca un número B: ";
	cin >> numeroB;
	cout << "El resultado de la suma de los dos números es: " << numeroA + numeroB << endl;
	cout << "El resultado de la resta del número B al número A es: " << numeroA - numeroB << endl;
	cout << "El producto del número A y el número B es: " << numeroA * numeroB << endl;

	return 0;
}