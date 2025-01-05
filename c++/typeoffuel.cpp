#include <iostream>
using namespace std;

int main()
{
    int n, contador_alcool = 0, contador_gasolina = 0, contador_diesel = 0;
    while (cin >> n)
    {
        if (n >= 1 && n < 4)
        {
            switch (n)
            {
            case 1:
                contador_alcool++;
                break;
            case 2:
                contador_gasolina++;
                break;
            case 3:
                contador_diesel++;
                break;
            default:
                break;
            }
        }

        if (n == 4)
        {
            break;
        }
    }
        cout << "MUITO OBRIGADO" << endl;
        cout << "Alcool: " << contador_alcool << endl;
        cout << "Gasolina: " << contador_gasolina << endl;
        cout << "Diesel: " << contador_diesel << endl;
    return 0;
}