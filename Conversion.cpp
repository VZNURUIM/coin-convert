#include <iostream>

using namespace std;

int main() {
	int response;

	cout << "[1]Dollar to Real\n[2] Real to Dollar: ";
	cin >> response;

	if (response == 1) {
		double dollar;

		cout << "\nHow many dollars? ";
		cin >> dollar;

		double dollar_to_real_formula = dollar * 4.90;
		
		cout << "\nResponse: " << dollar_to_real_formula << " Reais";
	}
	else if (response == 2) {
		double real;

		cout << "\nHow many real? ";
		cin >> real;

		double real_to_dollar_formula = real * 0.20;

		cout << "\nResponse: " << real_to_dollar_formula << " Dollars";
	}
}
