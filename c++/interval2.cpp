#include <iostream>
using namespace std;

int main()
{
    int N, X, contador_in = 0, contador_out = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> X;
        if (X >= 10 && X <= 20)
        {
            contador_in += 1;
        }
        else
        {
            contador_out += 1;
        }
    }

    cout << contador_in << " in" << endl;
    cout << contador_out << " out" << endl;

    return 0;
}
