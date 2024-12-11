#include <iostream>
using namespace std;

int main() {
    int valor;
    cin >> valor;
    cout << valor << endl;

    int notas[7] = {100, 50, 20, 10, 5, 2, 1};
    int quantidade_notas[7];

    for (int i = 0; i < 7; ++i) {
        quantidade_notas[i] = valor / notas[i];
        valor %= notas[i];
    }

    cout << quantidade_notas[0] << " nota(s) de R$ 100,00" << endl;
    cout << quantidade_notas[1] << " nota(s) de R$ 50,00" << endl;
    cout << quantidade_notas[2] << " nota(s) de R$ 20,00" << endl;
    cout << quantidade_notas[3] << " nota(s) de R$ 10,00" << endl;
    cout << quantidade_notas[4] << " nota(s) de R$ 5,00" << endl;
    cout << quantidade_notas[5] << " nota(s) de R$ 2,00" << endl;
    cout << quantidade_notas[6] << " nota(s) de R$ 1,00" << endl;

    return 0;
}
