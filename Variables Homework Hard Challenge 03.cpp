#include <iostream>
using namespace std;

int main()
{
	int N, R, N_plus_one;
	cin>>N;
	R = N % 2;
	N_plus_one = N + 1;
	int odd = (R+R) / 2;
	int even = 1 - odd;


	cout<<( ( N_plus_one * (N_plus_one / 2) ) - (N_plus_one / 2)) * odd + ((N * (N + 1)) / 2) * even<<"\n";

	return 0;
}
