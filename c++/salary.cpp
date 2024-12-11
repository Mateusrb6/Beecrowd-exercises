#include <iostream>
#include <iomanip>
using namespace std;

float salario(int hrs, float U$){
    float salary = hrs * U$;
    return salary;
}

int main(){

    int numeroEmpregado, horas;
    float usPorHora;

    cin >> numeroEmpregado >> horas >> usPorHora;
    float salary = salario(horas, usPorHora);

    cout << "NUMBER = " << numeroEmpregado << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary << endl;

    return 0;
}    