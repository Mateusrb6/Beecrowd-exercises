#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float n1, n2, n3, n4, nota_exame;
    cin >> n1 >> n2 >> n3 >> n4;

    float media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;

    cout << fixed << setprecision(1);
    cout << "Media: " << media << endl;

    if (media >= 5.0 && media <= 6.9)
    {
        cout << "Aluno em exame." << endl;

        cin >> nota_exame;

        cout << "Nota do exame: " << nota_exame << endl;

        float media_nova = (media + nota_exame) / 2;
    
        if (media_nova >= 5.0)
        {
            cout << "Aluno aprovado." << endl;
        }
        else
        {
            cout << "Aluno reprovado." << endl;
        }
        
        cout << fixed << setprecision(1);
        cout << "Media final: " << media_nova << endl;
    }

    else if (media > 5.0)
    {
        cout << "Aluno aprovado." << endl;
    }
    else
    {
        cout << "Aluno reprovado." << endl;
    }
    

    return 0;
}