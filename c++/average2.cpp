#include <iostream>
#include <iomanip>
using namespace std;

float media(float x, float y, float z){
    float media = ((x * 2) + (y * 3) + (z * 5)) / 10;
    return media;
}

int main(){
    float A, B, C;
    cin >> A >> B >> C;

    float mediaabc = media(A, B, C);
    cout << fixed << setprecision(1) << "MEDIA = " << mediaabc << endl;

    return 0;
}    