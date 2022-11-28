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
	int X, A, B, C, D, E;
	int more_than_x = 0;
	int lees_than_x = 0;
	cin >> X >> A >> B >> C >> D >> E;

	if ( A <= X ) {
		lees_than_x++;
	} else {
		more_than_x++;
	}

	if ( B <= X ) {
		lees_than_x++;
	} else {
		more_than_x++;
	}

	if ( C <= X ) {
		lees_than_x++;
	} else {
		more_than_x++;
	}

	if ( D <= X ) {
		lees_than_x++;
	} else {
		more_than_x++;
	}

	if ( E <= X ) {
		lees_than_x++;
	} else {
		more_than_x++;
	}


	cout << lees_than_x << " " << more_than_x;

	return 0;
}







