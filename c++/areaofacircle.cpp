#include <iostream>
#include <iomanip>
using namespace std;


double areadocirculo(double R){
    double pi = 3.14159;
    double area = pi * R * R;
    return area;
}

int main(){
    double raio;
    cin >> raio;
    double area = areadocirculo(raio);
    cout << "A=" << fixed << setprecision(4) << area << endl;
    
    return 0;
}