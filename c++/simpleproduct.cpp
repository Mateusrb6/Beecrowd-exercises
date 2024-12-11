#include <iostream>
using namespace std;

int product(int x, int y){
    int product = x * y;
    return product;
}

int main(){
    int a, b;
    cin >> a >> b;
    int produto = product(a, b);
    cout << "PROD = " << produto << endl;

    return 0;
}    