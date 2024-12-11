#include <iostream>
using namespace std;

int main(){
    float coord_x, coord_y;
    cin >> coord_x >> coord_y;

    if (coord_x == 0 && coord_y == 0)
    {
        cout << "Origem" << endl;
    }
    else if (coord_x > 0 && coord_y > 0)
    {
       cout << "Q1" << endl;
    }
    else if (coord_x < 0 && coord_y > 0)
    {
        cout << "Q2" << endl;
    }
    else if (coord_x < 0 && coord_y < 0)
    {
        cout << "Q3" << endl;
    }
    else if (coord_x > 0 && coord_y < 0)
    {
        cout << "Q4" << endl;
    }
    else if (coord_x == 0 && coord_y != 0)
    {
        cout << "Eixo Y" << endl;
    }
    else if (coord_y == 0 && coord_x != 0)
    {
        cout << "Eixo X" << endl;
    }
    
    return 0;
}  