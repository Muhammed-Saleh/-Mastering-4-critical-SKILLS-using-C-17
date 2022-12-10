#include<iostream>
using namespace std;

int main() {
	int N, M;
	cin >> N;
	cin >> M;
	int num1 = 1;
	int num2 = 1;

	while (num1 <= N) {
		while (num2 <= M) {
			cout << num1 << " x " << num2 << " = " << num1 * num2 << "\n";
			num2++;
		}
		num2 = 1;
		num1++;
	}

	return 0;
}
