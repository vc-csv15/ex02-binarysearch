#include<iostream>
#include"binarysearch.h"
using std::cout;
using std::endl;
using std::cin;



int main() {
    //Variable list
    int array[] = {1,2,3,4,5,6,7,8,9};
    size_t size = 9;
    int value;

    //get value
    cout << "Select a number 1 through 9 for index lookup: ";
    cin >> value;

    int Index = binarysearch(value, array, size);
    cout << Index << endl;
    return 0;
}
