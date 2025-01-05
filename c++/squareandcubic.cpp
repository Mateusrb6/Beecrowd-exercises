#include <iostream>
using namespace std;

int main() {
    int N;

    cin >> N;

    for (int i = 1; i <= N; ++i) {
        int square = i * i;
        int cube = i * i * i;
        cout << i << " " << square << " " << cube << endl;
    }

    return 0;
}
