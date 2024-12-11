#include <iostream>
using namespace std;

int main(){
    int tempo_inicio, tempo_fim, horas = 24;
    cin >> tempo_inicio >> tempo_fim;

    if (tempo_fim > tempo_inicio)
    {
        horas = tempo_fim - tempo_inicio;
        cout << "O JOGO DUROU " << horas << " HORA(S)" << endl;
    }
    else if (tempo_inicio == tempo_fim)
    {
        cout << "O JOGO DUROU " << horas << " HORA(S)" << endl;
    }
    else if (tempo_fim < tempo_inicio)
    {
        horas = (24 + tempo_fim) - tempo_inicio;
        cout << "O JOGO DUROU " << horas << " HORA(S)" << endl;
    }
    return 0;
}  