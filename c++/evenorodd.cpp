#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> x(n);

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];

        if (x[i] == 0)
        {
            cout << "NULL" << endl;
        }
        else if (x[i] > 0 && x[i] % 2 == 0)
        {
            cout << "EVEN POSITIVE" << endl;
        }
        else if (x[i] < 0 && x[i] % 2 == 0)
        {
            cout << "EVEN NEGATIVE" << endl;
        }
        else if (x[i] > 0 && x[i] % 2 != 0)
        {
            cout << "ODD POSITIVE" << endl;
        }
        else if (x[i] < 0 && x[i] % 2 != 0)
        {
            cout << "ODD NEGATIVE" << endl;
        }   
    }
    
    return 0;
}    
