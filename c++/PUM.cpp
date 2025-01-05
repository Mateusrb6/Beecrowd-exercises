#include <iostream>
using namespace std;

int main(){
    int n, count = 1;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 4; j++)
        {   
            if(count % 4 == 0){
                cout << "PUM";
            }
            else{
            cout << count << " ";
            }
            count++;
        }
        cout << endl;
    }
    
    return 0;
}
