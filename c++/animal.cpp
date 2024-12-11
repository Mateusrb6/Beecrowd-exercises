#include <iostream>
#include <string>
using namespace std;

int main() {
    string c1, c2, c3;

    cin >> c1;
    cin >> c2;
    cin >> c3;

    if (c1 == "vertebrado") {
        if (c2 == "ave") {
            if (c3 == "carnivoro") {
                cout << "aguia" << endl;
            } else if (c3 == "onivoro") {
                cout << "pomba" << endl;
            }
        } else if (c2 == "mamifero") {
            if (c3 == "onivoro") {
                cout << "homem" << endl;
            } else if (c3 == "herbivoro") {
                cout << "vaca" << endl;
            }
        }
    } else if (c1 == "invertebrado") {
        if (c2 == "inseto") {
            if (c3 == "hematofago") {
                cout << "pulga" << endl;
            } else if (c3 == "herbivoro") {
                cout << "lagarta" << endl;
            }
        } else if (c2 == "anelideo") {
            if (c3 == "hematofago") {
                cout << "sanguessuga" << endl;
            } else if (c3 == "onivoro") {
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}
