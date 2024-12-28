#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int N;
    float n1, n2, n3;
    float media;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> n1 >> n2 >> n3;
        media = (n1 * 2 + n2 * 3 + n3 * 5) / 10;
        cout << fixed << setprecision(1) << media << endl;
    }
    return 0;
}