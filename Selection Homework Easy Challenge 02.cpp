#include <iostream>
using namespace std;

int main() {
	int A,B,C;
	cin >> A >> B >> C;


	if (A > B && B > C) {
		cout << C << " " << B << " " << A << endl;
	} else if (A > C && C > B) {
		cout << B << " " << C << " " << A << endl;
	} else if (B > A && A > C) {
		cout << C << " " << A << " " << B << endl;
	} else if (B > C && C > A) {
		cout << A << " " << C << " " << B << endl;
	} else if (C > A && A > B) {
		cout << B << " " << A << " " << C << endl;
	} else {
		cout << A << " " << B << " " << C << endl;
	}

	return 0;
}
