#include<iostream>
using namespace std;

int main() {

	int count = 0;

		for(int X = 50;X <= 300; ++X){

			for(int Y = 70;Y <= 400; ++Y){
				if (X < Y && (X + Y) % 7 == 0) {
					count++;
				}

			}
		}

		cout << count;

	return 0;
}

