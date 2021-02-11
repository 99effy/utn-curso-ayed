#include <iostream>

using namespace std;

int main() {

    int     i,
            valor = 0;

    for (i = 1; i <= 10000; i++) {
        if (i % 2 == 0) {
            valor += i;
            cout << valor << endl;
        }
    }

    return 0;
}