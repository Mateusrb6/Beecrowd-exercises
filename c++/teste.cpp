#include <iostream>
using namespace std;

int main(){
    int valor;
    cin >> valor;
    cout << valor;

    int notas[7] = {100, 50, 20, 10, 5, 2, 1};
    int quantidadeNotas[7];

    for (int i = 0; i < 7; i++)
    {
        quantidadeNotas[i] = valor / notas[i];
        valor = valor % notas[i];
    }
    

    return 0;
}    