#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;

    float x, y;
    int contador = 0;

    while (cin >> x >> y and contador < n)
    {
        if (y == 0)
        {
            cout << "divisao impossivel" << endl;
        }
        else{
            cout << fixed << setprecision(1) << x / y << endl;
        }
        contador++;
    }
    return 0;
}