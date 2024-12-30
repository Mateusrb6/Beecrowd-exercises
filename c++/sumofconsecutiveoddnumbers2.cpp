#include <iostream>
using namespace std;

int main(){
    int n, x, y;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int soma = 0;
        cin >> x >> y;
        if (x > y)
        {
            int temp = x;
            x = y;
            y = temp;
        }
    

    for (int j = x + 1; j < y; j++)
    {
        if (j % 2 != 0)
        {
            soma += j;
        }
    }

    cout << soma << endl;

    }


    return 0;
}