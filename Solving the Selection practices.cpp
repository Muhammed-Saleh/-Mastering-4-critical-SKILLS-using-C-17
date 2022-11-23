#include <iostream>
using namespace std;

int main()
{
// Min of 3 numbers

	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;

	if (num1 < num2 && num1 < num3)
		cout << num1 << "\n";
	else if (num2 < num1 && num2 < num3)
		cout << num2 << "\n";
	else if (num3 < num1 && num3 < num2)
		cout << num3 << "\n";
	else
		cout << num1 << "\n";
//////////////////////////////////////////////////////////////////
// IS even : print digits
	int N;
	cin >> N;

	if (N % 2 == 0) {
		cout << N % 10;
	} else {
		if (N < 1000) {
			cout << N % 100;
		} else if (1000 < N && N < 1000000) {
			cout << N % 10000;
		} else {
			cout << N * -1;
		}
	}

//////////////////////////////////////////////////////////////////
// Last 3 digits
	int N;
	cin >> N;

	if (N < 10000) {
		cout << "This is a small number";
	} else {
		int digit_1, digit_2, digit_3, sum;
		digit_1 = N % 10;
		N /= 10;
		digit_2 = N % 10;
		N /= 10;
		digit_3 = N % 10;
		sum = digit_1 + digit_2 + digit_3;

		if (sum % 2 != 0){
			cout << "This is a great number" << endl;
		} else {
			if (digit_1 % 2 != 0 || digit_2 % 2 != 0 || digit_3 % 2 != 0) {
				cout << "This is a good number" << endl;
			} else {
				cout << "This is a bad number" << endl;
			}
		}
	}

	return 0;
}








