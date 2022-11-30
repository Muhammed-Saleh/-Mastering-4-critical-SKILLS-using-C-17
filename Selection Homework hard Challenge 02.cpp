#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
	int s1, e1, s2, e2;
	cin >> s1 >> e1 >> s2 >> e2;

	if (e1 > s2) {
		cout << s2 << " " << e1;
	} else {
		cout << -1;
	}

	return 0;
}
