#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int x;
    float y;

    cin >> x >> y;

    float consumo = x / y;

    cout << fixed << setprecision(3) << consumo << " km/l"<< endl;

    return 0;
}    