#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float nota1, nota2;
    while (true)
    {
        cin >> nota1;
        if(nota1 < 0.0 || nota1 > 10.0){
            cout << "nota invalida" << endl;
            continue;
        }
        break;
    }

    while(true){
        cin >> nota2;
        if (nota2 < 0.0 || nota2 > 10.0)
        {
            cout << "nota invalida" << endl;
            continue;
        }
        break;
    }
    
    cout << fixed << setprecision(2) << "media = " <<(nota1 + nota2)/2 << endl;
   
    return 0;
}