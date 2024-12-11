#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double areaTriangRetang(double A, double C){
    double area = (A * C) /2;
    return area;
}

double areaCirculo (double C){
    double pi = 3.14159;
    double area = pi * pow(C, 2);
    return area;
}

double areaTrapezio(double A, double B, double C){
    double area = (((A+B)*C)/2);
    return area;
}

double areaQuadrado(double B){
    double area = pow(B, 2);
    return area;
}

double areaRetang(double A, double B){
    double area = A * B;
    return area;
}

int main(){
    double x, y, z;
    cin >> x >> y >> z;

    cout << fixed << setprecision(3) << "TRIANGULO: " << areaTriangRetang(x, z) << endl;
    cout << fixed << setprecision(3) << "CIRCULO: " << areaCirculo(z) << endl;
    cout << fixed << setprecision(3) << "TRAPEZIO: " << areaTrapezio(x, y, z) << endl;
    cout << fixed << setprecision(3) << "QUADRADO: " << areaQuadrado(y) << endl;
    cout << fixed << setprecision(3) << "RETANGULO: "<< areaRetang(x, y) << endl;

    return 0;
}    