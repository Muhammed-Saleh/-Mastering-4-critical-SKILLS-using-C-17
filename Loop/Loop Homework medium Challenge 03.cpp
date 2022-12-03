#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int num = 1;
	while (N > 0 && num >= 1) {
		if (num % 3 == 0 && num % 4 != 0) {
			cout << num << " ";
			N--;
		}
		num++;
	}
	return 0;
}







