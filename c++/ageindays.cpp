#include <iostream>
using namespace std;

int main(){
    int days, years, months;
    cin >> days;

    years = days / 365;
    days = days % 365;

    months = days / 30;
    days = days % 30;

    cout << years << " ano(s)" << endl; //anos
    cout << months << " mes(es)" << endl; //meses
    cout << days << " dia(s)" << endl; //dias   

    return 0;
}    