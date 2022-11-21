#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	// First method
	bool mod = num % 2;
	cout<< mod * 7 + 100 * !mod << endl;

	// First method
	double result_1 = (double)num / 2;

	int result_2 = num / 2;

	int reminder = (result_1 - result_2) * 2;

	int is_even = 1 - reminder;

	cout<< reminder * 7 + 100 * is_even;


	return 0;
}








