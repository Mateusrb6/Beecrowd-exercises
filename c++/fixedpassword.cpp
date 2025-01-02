#include <iostream>
using namespace std;

int main() {
    int password, correct_password = 2002;
    while(cin >> password){
        if (password == correct_password)
        {
            cout << "Acesso Permitido" << endl;
            break;
        }
        if (password != correct_password)
        {
            cout << "Senha Invalida" << endl;
            continue;
        }
    }
 
    return 0;
}