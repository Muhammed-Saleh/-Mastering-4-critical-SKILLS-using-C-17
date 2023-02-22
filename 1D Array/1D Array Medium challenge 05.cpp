#include<iostream>
using namespace std;

int main() {
	const int N = 500;
	int n, num;
	int arr[N];
	int tmp[N];
	int tmp2[N];

	for(int i = 0; i < N; i++) {
		arr[i] = -1;
		tmp[i] = -1;
		tmp2[i] = -1;
	}


	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> num;
		arr[i] = num;
	}

	int counter = N;
	while(counter--) {
		if (arr[counter] > 0){
			int storage = arr[counter];
			tmp[storage] = counter;
		}

	}

	 counter = N;
	while(counter--) {
		if (tmp[counter] >= 0){
			int storage = tmp[counter];
			tmp2[storage] = counter;
		}

	}

	for(int i = 0; i < N; i++) {
		if (tmp2[i] >= 0) {
			cout << tmp2[i] << " ";
		}

	}

	return 0;
}


