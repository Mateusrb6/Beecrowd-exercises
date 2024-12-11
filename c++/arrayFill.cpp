#include <iostream>
using namespace std;

int main(){

    int v[10], x;

    cin >> x;

    v[0] = x;

    for (int i = 1; i < 10; i++)
    {
       v[i] = v[i-1] * 2;
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout << "N[" << i << "]" << " = " << v[i] << endl;
    }

    return 0;
}    