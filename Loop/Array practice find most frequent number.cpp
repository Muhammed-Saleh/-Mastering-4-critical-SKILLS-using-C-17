#include<iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int numbers[200];

	for (int i = 0;i < n; ++i) {
		cin >> numbers[i];
	}

	int idx = 0;
	int current_cnt = 0;
	int process_cnt = 0;
	for (int i = 0;i < n; ++i) {
		for (int j = i+1;j < n; ++j) {
			if(i == j)
				process_cnt++;
		}
		if(current_cnt < process_cnt) {

			current_cnt = process_cnt;
			idx = i;
		}
		process_cnt = 0;

	}
		cout << numbers[idx] << " ";



	return 0;
}

