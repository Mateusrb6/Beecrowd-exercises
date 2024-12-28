#include <iostream>
using namespace std;

int main(){
    int n = 100;
    int num[n], maior = 0, posicao_maior = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        if (num[i] > maior)
        {
            maior = num[i];
            posicao_maior = i + 1;
        }
    }
    
    cout << maior << endl << posicao_maior << endl;
    return 0;
}