#include <iostream>
using namespace std;

int main()
{
	double num1, num2, num3, num4, num5;
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	double avr_1, avr_2;
	avr_1 = (num1 + num2 + num3) / 3;
	avr_2 = (num4 + num5) / 2;

	cout<<(num1 + num2 + num3 + num4 + num5) / 5<<endl;
	cout<<(num1 + num2 + num3) / (num4 + num5)<<endl;
	cout<< (avr_1 / avr_2)<<endl;
	return 0;
}










