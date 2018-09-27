
#include<iostream>

#include"binarysearch.h"

using std::cout;
using std::endl;
using std::cin;

int main(int argc, char *argv[]) {

	//Variable list

	int64_t array[] = { 1,2,3,4,5,6,7,8,9 };
	size_t size = 9;
	int64_t value;

	//get value

	cout << "Select a number 1 through 9 for index lookup: ";
	cin >> value;

	//output to user
	int64_t Index = binarySearch(value, array, size);
	cout << "The value you were looking for was at: " << Index << endl;

	return 0;

}

