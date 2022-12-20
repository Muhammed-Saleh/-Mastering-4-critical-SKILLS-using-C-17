#include<iostream>
using namespace std;

int main() {


    //////// 01 ////////////

    /*
	int x;
	int y;
	cin >> x;
	cin >> y;

	for (int i = x; i <= y; ++i) {
		cout << i <<  endl;
	}    
    */

    ////////  ////////////
    //////// 02 ////////////

    /*
	int x;
	char y;
	cin >> x;
	cin >> y;

	for (int i = 1; i <= x; ++i) {
		cout << y << " ";
	}
    */

    ////////medium 02  ////////////

/*
	int N;
	cin >> N;

	for (int i = 0;i < N; i++) {
		if (i % 8 == 0 || (i % 4 == 0 && i % 3 == 0) )
		cout << i << " ";
	}

*/

    	////////  ////////////


    ////////medium 03  ////////////

/*
	int N;
	cin >> N;
	for (int i = 0;i < 100; ++i) {

		if (i % 3 == 0 && i % 4 != 0 && N != 0) {
			cout << i << " ";
			--N;
			if (N == 0) {
				break;
			}
		}

	}
*/
    ////////  ////////////


    ////////medium 04  ////////////

		int T;
	cin >> T;
	int num = 2147483647;
	for (int i = 0;i < T; ++i) {
		int N;
		cin >> N;
		for (int k = 0;k < N; ++k) {
			int given_num;
			cin >> given_num;
		if (given_num < num) {
			num = given_num;
			}
		}
			cout << num << "\n";
			num = 2147483647;
	}

    ////////  ////////////


    ////////  hard 01  ////////////

		int T;

	cin >> T;

	for(int i = 0;i < T; ++i){
		string S;
		cin >> S;
		if (S == "NO" || S == "No" || S == "nO" || S == "no" || S == "On" || S == "oN" || S == "ON" || S == "on") {
			cout << S << " ";
		}
	}


    ////////  ////////////

	////////  hard 02  ////////////

	int T;

	cin >> T;

	int temp = 0;

	int assist;

	for(int i = 0;i < 100; ++i){

		assist = T % 10;
		T /= 10;
		if (temp == 0) {
			temp = assist;
		} else {
			temp = temp * 10 + assist;
		}

	  if (T == 0){
		break;

	  }
	}

		cout << temp << " " << temp * 3;
	
	/////////////////////////////


	////////  hard 03  ////////////

	int T;

	cin >> T;

	int N;

	cin >> N;

	for(int i = 1;i <= T; ++i){

		for(int k = 1;k <= N; ++k){
			cout << i << " x " << k << " = " << i * k << "\n";
		}

	}

	/////////////////////////////


	////////  hard 04  ////////////

	int T;
	cin >> T;


	for(int i = 1;i <= T; ++i){

		int N;
		cin >> N;

			int assist = 0;
			int num = 0;
		for(int k = 1;k <= N; ++k){

			int M;
			cin >> M;
			assist = M;
				if ( num == 0) {
					num = M;
				} else {

					for (int j = 2; j <= k; ++j) {

						assist *= M;
					}
						num += assist;
				}

		}

		cout << num << "\n";

	}

	/////////////////////////////



	return 0;
}

