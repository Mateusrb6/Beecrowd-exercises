#include <iostream>
using namespace std;

int main(){
    int maior = 0;

    int inteiro[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> inteiro[i];

        if (inteiro[i] > maior)
        {
            maior = inteiro[i];
        }
    }
    
    cout << maior << " eh o maior" << endl;

    return 0;
}    