#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float time, speed, distance, litros;
    cin >> time >> speed;

    distance = speed * time;

    litros = distance / 12;

    cout << fixed << setprecision(3) << litros << endl;   
    
    return 0;
}    