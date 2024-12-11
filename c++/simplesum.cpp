#include <iostream>
using namespace std;

int soma(int x, int y){
    int soma = x + y;
    return soma;
}

int main(){
    int a, b;
    cin >> a >> b;

    int somaab = soma(a, b);
    cout << "SOMA = " << somaab << endl;
    return 0;
}    