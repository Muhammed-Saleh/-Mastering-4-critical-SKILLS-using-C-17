#include <iostream>
using namespace std;

int main() {
	int A,B,C;
	cin >> A >> B >> C;


	if (A < 100 && ( (A > B || A > C) || (B >= 100 && C >= 100) ) ) {
		cout << A << endl;
	} else if (B < 100 && ( (B > A || A > C) || (A >= 100 && C >= 100) ) ) {
		cout << B << endl;
	} else if (C < 100 && ( (C > A || A > B) || (A >= 100 && B >= 100) ) ) {
		cout << C << endl;
	} else {
		cout << -1;
	}

	return 0;
}
