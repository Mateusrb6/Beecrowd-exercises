#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int snack[5] = {1, 2, 3, 4, 5};
    float preco_snack[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    int contador_snack[5] = {0};
    float total = 0.0;
    int x, y;
    
    cin >> x >> y;

    for (int i = 0; i < 5; i++)
    {
        if (x == snack[i]){
            contador_snack[i] += y;
            break;
        }
    }
    
    for (int i = 0; i < 5; i++)
    {
        total += contador_snack[i] * preco_snack[i];
    }
    
    cout << "Total: R$" << fixed << setprecision(2) << total << endl;


    return 0;
}    