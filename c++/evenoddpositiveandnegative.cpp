#include <iostream>
using namespace std;

int main(){
    int n[5], contador_pares = 0, contador_impares = 0,
    contador_positivos = 0, contador_negativos = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> n[i];
        if (n[i] % 2 == 0)
        {
            contador_pares += 1;
        }
        else if (n[i] % 2 != 0)
        {
            contador_impares += 1;
        }
        
        if (n[i] > 0)
        {
            contador_positivos += 1;
        }
        else if (n[i] < 0)
        {
            contador_negativos += 1;
        }
    }
    

    cout << contador_pares << " valor(es) par(es)" << endl;
    cout << contador_impares << " valor(es) impar(es)" << endl;
    cout << contador_positivos << " valor(es) positivo(s)" << endl;
    cout << contador_negativos << " valor(es) negativo(s)" << endl;

    return 0;
}    
