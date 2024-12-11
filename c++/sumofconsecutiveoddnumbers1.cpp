#include <iostream>
using namespace std;

int main(){
    int x, y, soma = 0;
    cin >> x >> y;

    for (int i = x; i < y; i++)
    {
        if (i % 2 != 0)
        {
            soma += i;
        }
    }
    

    return 0;
}    
