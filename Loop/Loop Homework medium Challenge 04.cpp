#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T > 0) {
		int N, num;
		cin >> N;
		int min = 2147483647;
		while (N > 0) {
			cin >> num;
			if (num < min) {
				min = num;
			}
			N--;
		}
		cout << min << "\n";
	 T--;
	}
	return 0;

}



