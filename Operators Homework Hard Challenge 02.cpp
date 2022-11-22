#include <iostream>
using namespace std;

int main()
{
	double num;
	cin >> num;
	double years = num / 360;
	double reminder = years - (int)years;
	reminder *= 360;
	double monthes = reminder / 30;
	reminder = monthes - (int)monthes;
	reminder *= 30;
	cout<< (int)years<< " " << (int)monthes<< " " << reminder;


	return 0;
}








