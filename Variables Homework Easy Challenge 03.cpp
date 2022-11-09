#include <iostream>
using namespace std;

int main()
{
	int odd1, even1, odd2, even2, odd3, even3, odd4, even4, evens_sum, odds_sum;

	cin>>odd1;
	cin>>even1;
	cin>>odd2;
	cin>>even2;
	cin>>odd3;
	cin>>even3;
	cin>>odd4;
	cin>>even4;
	evens_sum = even1+even2+even3+even4;
	odds_sum = odd1+odd2+odd3+odd4;
	cout<<"Input: "<<" "<<odd1<<" "<<even1<<" "<<odd2<<" "<<even2<<" "<<odd3<<" "<<even3<<" "<<odd4<<" "<<even4<<endl;
	cout<<"Output: "<<evens_sum<<" "<<odds_sum;
	return 0;
}
