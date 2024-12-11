#include <iostream>
using namespace std;

int main(){
    int n[5], contador_pares = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> n[i];
        if (n[i] % 2 == 0)
        {
            contador_pares += 1;
        }
    }
    
    cout << contador_pares << " valores pares" << endl;

    return 0;
}    
