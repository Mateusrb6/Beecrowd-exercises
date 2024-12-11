#include <iostream>
using namespace std;

int main()
{
    int n[3], maior = 0, menor = 0, meio;

    for (int i = 0; i < 3; i++)
    {
        cin >> n[i];
    }

    for (int i = 0; i < 3; i++)
    {
        if (n[i] > maior)
        {
            maior = n[i];
        }
        else if (n[i] < menor)
        {
            menor = n[i];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (n[i] != menor && n[i] != maior)
        {
            meio = n[i];
            break;
        }
    }
    cout << menor << endl
         << meio << endl
         << maior << endl;

    cout << "\n";

    for (int i = 0; i < 3; i++)
    {
        cout << n[i] << endl;
    }

    return 0;
}