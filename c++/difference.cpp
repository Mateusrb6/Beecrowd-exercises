#include <iostream>
#include <iomanip>
using namespace std;

int difference(int x, int y, int z, int k){
    int diferenca = ((x * y) - (z * k));
    return diferenca;
}

int main(){
    int A, B, C, D; 
    cin >> A >> B >> C >> D;

    int diferenca = difference(A, B, C, D);

    cout << "DIFERENCA = " << diferenca <<endl;

    return 0;
}    