#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
	int X, s1, e1, s2, e2, s3, e3;
	cin >> X >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;
	int cnt = 0;

	if(X >= s1 && X <=e1) {
		cnt++;
	}

	if(X >= s2 && X <=e2) {
		cnt++;
	}

	if(X >= s3 && X <=e3) {
		cnt++;
	}

	cout << cnt << endl;
	return 0;
}
