#include <iostream>

using namespace std;

int main() {

    signed int		i,
			j,
			sumaMayor100,
			sumaMenorMenos10;
	
	// Por alguna razón sumaMenorMenos10 automáticamente se inicializa como 32765
	sumaMenorMenos10 -= 32766;

    for (i=0;i<50;i++) {
        cout << "Introduzca un número: " << endl;
		cin >> j;

		if (j > 100) sumaMayor100 += j;
		if (j < -10) sumaMenorMenos10 += j;

		cout << j << endl;
    }

	cout << "Suma de números mayores a 100: " << sumaMayor100 << endl;
	cout << "Suma de número menores a -10: " << sumaMenorMenos10 << endl;

    return 0;

}