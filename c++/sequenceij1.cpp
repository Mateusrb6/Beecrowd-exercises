#include <iostream>
using namespace std;

int main(){

    for (int i = 1, j = 60; i < 1000, j >= 0; i += 3, j -= 5)
    {
        cout << "I=" << i << " " << "J=" << j << "/n";
    }
    
    return 0;
}