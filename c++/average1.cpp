#include <iostream>
#include <iomanip>
using namespace std;

float media(float x, float y){
    float media = ((x * 3.5) + (y * 7.5)) / (3.5 + 7.5);
    return media;
}

int main(){
    float A, B;
    cin >> A >> B;

    float mediaab = media(A, B);
    cout << fixed << setprecision(5) << "MEDIA = " << mediaab << endl;

    return 0;
}    