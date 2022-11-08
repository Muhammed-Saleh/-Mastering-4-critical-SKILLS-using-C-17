//============================================================================
// Name        : Test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	string stud_1_nam, stud_2_nam;
	int stud_1_id, stud_2_id, stud_1_math, stud_2_math;

	cout<<"What is student 1 name: ";
	cin>>stud_1_nam;
	cout<<"His id: ";
	cin>>stud_1_id;
	cout<<"His math exam grade: ";
	cin>>stud_1_math;


	cout<<"What is student 2 name: ";
	cin>>stud_2_nam;
	cout<<"His id: ";
	cin>>stud_2_id;
	cout<<"His math exam grade: ";
	cin>>stud_2_math;

	cout<<"Students grades in math"<<endl;
	cout<<stud_1_nam<<"(with id "<<stud_1_id<<") got grade: "<<stud_1_math<<endl;
	cout<<stud_2_nam<<"(with id "<<stud_2_id<<") got grade: "<<stud_2_math<<endl;
	cout<<"Average grade is "<<(stud_1_math + stud_2_math) / 2<<endl;

	return 0;
}

