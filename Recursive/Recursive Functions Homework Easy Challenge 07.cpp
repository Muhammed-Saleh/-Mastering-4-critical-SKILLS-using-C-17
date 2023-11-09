#include<iostream>
using namespace std;
int counter = 1;

int arr_accumlate(int arr[], int len) {

	if (len == 1) {

		return arr[0];
	}

	int accumlator = arr_accumlate(arr, len - 1);

	 arr[len - 1] += accumlator;
	 return arr[len - 1];

}
