#include <iostream>
using namespace std;

int main(){
    float n[6];
    int contador_positivo = 0;
    
    for (int i = 0; i < 6; i++)
    {
        cin >> n[i];
        if (n[i] > 0)
        {
            contador_positivo += 1;
        }   
    }
    
    cout << contador_positivo << " valores positivos" << endl;

    return 0;
}    
