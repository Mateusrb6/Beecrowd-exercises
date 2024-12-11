#include <iostream>
#include <iomanip>
using namespace std;

double salariobonus(double salariofix, double vend){
    double salary = salariofix + (vend * 0.15);
    return salary;
}

int main(){

    double salariofixo, vendas;
    string nomeEmpregado;

    cin >> nomeEmpregado >> salariofixo >> vendas;
    double total = salariobonus(salariofixo, vendas);

    cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}    