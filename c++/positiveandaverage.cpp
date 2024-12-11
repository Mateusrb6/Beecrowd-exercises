#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int contador_positivos = 0;
    float n[6], media, soma = 0;

    for (int i = 0; i < 6; i++)
    {
        cin >> n[i];
        if (n[i] > 0)
        {
            contador_positivos += 1;
            soma += n[i];
        }
    }

    media = soma / contador_positivos;
    cout << fixed << setprecision(1);
    cout << contador_positivos << " valores positivos" << endl;
    cout << media << endl;
    return 0;
}    
