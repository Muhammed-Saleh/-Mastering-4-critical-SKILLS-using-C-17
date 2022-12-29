#include<iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int numbers[200];

	for (int i = 0;i < n; ++i) {
		cin >> numbers[i];
	}

	int tmp = 0;
	for (int i = 0;i < n; ++i) {
		if (i >= n-i-1)
			break;

		tmp = numbers[i];
		numbers[i] = numbers[n-i-1];
		numbers[n-i-1] = tmp;


	}
	for (int i = 0;i < n; ++i) {
		cout << numbers[i] << " ";
	}



	return 0;
}

