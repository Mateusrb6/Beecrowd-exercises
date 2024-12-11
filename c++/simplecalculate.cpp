#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int codigo1, unidades1, codigo2, unidades2;
    float preco1, preco2;

    cin >> codigo1 >> unidades1 >> preco1;
    cin >> codigo2 >> unidades2 >> preco2;

    float valor = (unidades1 * preco1) + (unidades2 * preco2);
    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << valor << endl;

    return 0;
}    