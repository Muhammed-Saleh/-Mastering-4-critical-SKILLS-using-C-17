#include<iostream>
using namespace std;
int counter = 1;

int length_3n_plus_1(int n) {

	if (n == 1) {

		return 1;
	}


	if (n % 2 == 0) {
		counter++;
		length_3n_plus_1(n / 2);
	} else {
		counter++;
		length_3n_plus_1(3 * n + 1);

	}
	return counter;
}
int main() {

	cout<<length_3n_plus_1(6);

	return 0;
}

