#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	// Is even using %2
	bool is_even1 = num % 2;

	// Is even using /2
	bool is_even2 = double(num) / 2 - (num/2);

	// Is even using %10
	int result = num % 10;
	bool is_even3 = ( result > 0 && double(num) / 2 - (num/2) );

	cout<<is_even1<<" "<<is_even2<<" "<<is_even3<<endl;
	return 0;
}
