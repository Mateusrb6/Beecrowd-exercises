#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n, amount;
    char type;
    int contador_cobaias = 0, contador_coelhos = 0, contador_ratos = 0, contador_sapos = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> amount >> type;
        if (type == 'C')
        {
            contador_coelhos += amount;
        }
        else if (type == 'R')
        {
            contador_ratos += amount;
        }
        else if (type == 'S')
        {
            contador_sapos += amount;
        }
        contador_cobaias += amount;
    }

     float percentual_coelhos = (float)contador_coelhos / contador_cobaias * 100;
     float percentual_ratos = (float)contador_ratos / contador_cobaias * 100;
     float percentual_sapos = (float)contador_sapos / contador_cobaias * 100;

    cout << "Total: " << contador_cobaias << " cobaias" << endl 
         << "Total de coelhos: " << contador_coelhos << endl 
         << "Total de ratos: " << contador_ratos << endl 
         << "Total de sapos: " << contador_sapos << endl 
         << fixed << setprecision(2) << "Percentual de coelhos: " << percentual_coelhos << " %" << endl 
         << "Percentual de ratos: " << percentual_ratos << " %" << endl
         << "Percentual de sapos: " << percentual_sapos << " %" << endl; 

    return 0;
}