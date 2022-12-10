#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	while (N) {
		string word;
			cin >> word;
			if (word == "No" || word == "NO" || word == "no" || word == "nO" || word == "On" || word == "ON" || word == "on" || word == "oN") {
				cout << word << "\n";
			}
		N--;
	}
	return 0;
}







