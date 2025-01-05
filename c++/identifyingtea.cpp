#include <iostream>
using namespace std;

int main(){
    int t, tea_options[5], contador = 0;

    cin >> t;

    for (int i = 0; i < 5; i++)
    {
        cin >> tea_options[i];
        if (tea_options[i] == t)
        {
            contador++;
        }
    }
    cout << contador << endl;
    return 0;
}