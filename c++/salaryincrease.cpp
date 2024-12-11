#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float salario, novo_salario, reajuste_percentual, reajuste;
    cin >> salario;

    if (salario >= 0 && salario <= 400.00)
    {
        reajuste_percentual = 1.15;
        novo_salario = salario * reajuste_percentual;
        reajuste = 0.15 * salario;
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << novo_salario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: " << "15 %" << endl;
    }
    
    else if (salario >= 400.01 && salario <= 800.00)
    {
        reajuste_percentual = 1.12;
        novo_salario = salario * reajuste_percentual;
        reajuste = 0.12 * salario;
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << novo_salario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: " << "12 %" << endl;
    }
    else if (salario >= 800.00 && salario <= 1200.01)
    {
        reajuste_percentual = 1.1;
        novo_salario = salario * reajuste_percentual;
        reajuste = 0.1 * salario;
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << novo_salario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: " << "10 %" << endl;
    }

    else if (salario >= 1200.01 && salario <= 2000.00)
    {
        reajuste_percentual = 1.07;
        novo_salario = salario * reajuste_percentual;
        reajuste = 0.07 * salario;
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << novo_salario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: " << "7 %" << endl;
    }

    else if (salario > 2000.00)
    {
        reajuste_percentual = 1.04;
        novo_salario = salario * reajuste_percentual;
        reajuste = 0.04 * salario;
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << novo_salario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        cout << "Em percentual: " << "4 %" << endl;
    }
    
    return 0;
}    
