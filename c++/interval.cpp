#include <iostream>
using namespace std;

int main() {
  float number;

  cin >> number;

  if (number < 0.00 || number > 100.00) {
    cout << "Fora de intervalo" << endl;
  } else {
    if (number <= 25.00) {
      cout << "Intervalo [0,25]" << endl;
    } else if (number <= 50.00) {
      cout << "Intervalo (25,50]" << endl;
    } else if (number <= 75.00) {
      cout << "Intervalo (50,75]" << endl; // Assuming intervals are exclusive on the lower bound
    } else {
      cout << "Intervalo (75,100]" << endl;
    }
  }

  return 0;
}
