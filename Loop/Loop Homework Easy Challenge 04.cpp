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
	int N;

	cin >> N;

	int row  = 1;
	while (row <= N) {
		int stars_count = N;

		while (stars_count >= row) {
			cout << "*";
			--stars_count;
		}
		cout << "\n";
		row++;
	}

	return 0;
}







