#include<iostream>
using namespace std;

int main() {

	int N;
	cin >> N;

	string word = "";
		for(int i = 1;i <= N; ++i){

			if ( ( N % i == 0  &&  i != 1  &&  N != i ) || N <= 1) {
				word = "No";
			     break;

			} else {
				word = "Yes";
			}
		}

		cout << word;


	return 0;
}

