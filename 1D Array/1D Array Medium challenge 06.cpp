#include<iostream>
using namespace std;

int main() {
	const int N = 500 + 1;
	int n, value;
	int tmp[N] = { -1 };

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> value;
		if (tmp[value] == -1) {
			tmp[value] += 2;
		} else {
			tmp[value] += 1;
		}
	}

	for (int i = 0; i < N; i++) {
		int counter = tmp[i];

		if (counter > 0) {
			while (counter--) {
				cout << i << " ";
			}
		}
	}
	return 0;
}


