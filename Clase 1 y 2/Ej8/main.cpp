#include <iostream>

using namespace std;

int main() {

    int	i,
		j = 0,
		sumaMayor100 = 0,
		sumaMenorMenos10 = 0,
		totalSumaMayor100 = 0;

    for (i=0; i<50; i++) {
        cout << "Introduzca un número: " << endl;
		cin >> j;

		if (j > 100) {
			sumaMayor100 += j;
			totalSumaMayor100++;
		} else if (j < -10) sumaMenorMenos10 += j;
    }

	cout << "Promerdio de números mayores a 100: " << sumaMayor100 / totalSumaMayor100 << endl;
	cout << "Suma de número menores a -10: " << sumaMenorMenos10 << endl;

    return 0;

}