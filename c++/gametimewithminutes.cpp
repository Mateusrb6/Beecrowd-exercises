#include <iostream>
#include <string>

int main() {
    int hi, mi, hf, mf;
    std::cin >> hi >> mi >> hf >> mf;

    mi += hi * 60;
    mf += hf * 60;

    int tempo = mf - mi;
    if (tempo <= 0) {
        tempo += 24 * 60;
    }

    int h = tempo / 60;
    int m = tempo % 60;

    std::cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)" << std::endl;

    return 0;
}
