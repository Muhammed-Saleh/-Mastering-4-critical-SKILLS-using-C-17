#include<iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int numbers[n];

	for (int i = 0;i < n; ++i) {
		cin >> numbers[i];
	}

	int idx1= -2147483647;
	int idx2 = -2147483647;
	int idx1_tmp = -2147483647;
	for (int i = 0;i < n; ++i) {
		if (idx1 < numbers[i]){
			idx1 = numbers[i];
		}
		if (idx2 < numbers[i]) {
			idx2 = numbers[i];
		}
		if (idx1 == idx2) {
			idx2 = idx1_tmp;
		}

		idx1_tmp = idx1;

	}

	cout << idx1 << " " << idx2 << endl;

	return 0;
}

