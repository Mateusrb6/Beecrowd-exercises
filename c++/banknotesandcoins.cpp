#include <iostream>
using namespace std;

int main() {
    double valor;
    cin >> valor;
    
    int cents = int(valor * 100);

    int notas[6] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[6] = {100, 50, 25, 10, 5, 1};

    int quantidade_notas[6] = {0};
    int quantidade_moedas[6] = {0};

    for (int i = 0; i < 6; ++i) 
    {
        quantidade_notas[i] = cents / notas[i];
        cents %= notas[i];
    }    
    for (int i = 0; i < 6; i++)
    {
        quantidade_moedas[i] = cents / moedas[i];            
        cents %= moedas[i];
    }
    

    cout << "NOTAS:" << endl;
    cout << quantidade_notas[0] << " nota(s) de R$ 100.00" << endl;
    cout << quantidade_notas[1] << " nota(s) de R$ 50.00" << endl;
    cout << quantidade_notas[2] << " nota(s) de R$ 20.00" << endl;
    cout << quantidade_notas[3] << " nota(s) de R$ 10.00" << endl;
    cout << quantidade_notas[4] << " nota(s) de R$ 5.00" << endl;
    cout << quantidade_notas[5] << " nota(s) de R$ 2.00" << endl;
    
    cout << "MOEDAS:" << endl;
    cout << quantidade_moedas[0] << " moeda (s) de R$ 1.00" << endl;
    cout << quantidade_moedas[1] << " moeda (s) de R$ 0.50" << endl;
    cout << quantidade_moedas[2] << " moeda (s) de R$ 0.25" << endl;
    cout << quantidade_moedas[3] << " moeda (s) de R$ 0.10" << endl;
    cout << quantidade_moedas[4] << " moeda (s) de R$ 0.05" << endl;
    cout << quantidade_moedas[5] << " moeda (s) de R$ 0.01" << endl;

    return 0;
}