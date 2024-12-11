#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double volumeEsfera(double pi, double R){
    double volume = (4/3.0) * pi * pow(R, 3);
    return volume;
}

int main(){
    double Pi = 3.14159, r;
    cin >> r;
    
    double volumeDaEsfera = volumeEsfera(Pi, r);
    cout << fixed << setprecision(3) << "VOLUME = " << volumeDaEsfera << endl;

    return 0;
}    