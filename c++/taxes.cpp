#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float salary;
	cin >> salary;

	float tax_sum = 0;

	if (salary > 4500.0) {
		tax_sum += (salary - 4500.0) * 0.28;
	}

	if (salary > 3000.0) {
		if (salary - 3000.0 > 1500.0) {
			tax_sum += 1500.0 * 0.18;
		} else {
			tax_sum += (salary - 3000.0) * 0.18;
		}
	}

	if (salary > 2000.0) {
		if (salary - 2000.0 > 1000.0) {
			tax_sum += 1000.0 * 0.08;
		} else {
			tax_sum += (salary - 2000.0) * 0.08;
		}
	}

	if (tax_sum > 0) {
        cout << fixed << setprecision(2);
		cout << "R$ " <<tax_sum << endl;
	} else {
		cout << "Isento" << endl;
	}

	return 0;
}