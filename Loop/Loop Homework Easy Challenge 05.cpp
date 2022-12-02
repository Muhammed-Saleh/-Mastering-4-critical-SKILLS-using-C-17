//============================================================================
// Name        : Test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int N,num;

	cin >> N;

	int nums_row  = 1;
	int odds_n = 0;
	int odds_sum = 0;
	int evens_n = 0;
	int evens_sum = 0;

	while (nums_row <= N) {
		cin >> num;

		if (nums_row % 2 == 0) {
			evens_n += 1;
			evens_sum += num;
		} else {
			odds_n += 1;
			odds_sum += num;
		}

		nums_row++;
	}

	cout << odds_sum / odds_n << " " << evens_sum / evens_n << "\n";

	return 0;
}







