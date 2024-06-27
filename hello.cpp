#include <iostream>
using namespace std;

int main() {
    int val1, val2, val3;

    cout << "Enter the first integer: ";
    cin >> val1;
    cout << "Enter the second integer: ";
    cin >> val2;
    cout << "Enter the third integer: ";
    cin >> val3;

    int *ptr1 = new int;
    int *ptr2 = new int;
    int *ptr3 = new int;

    *ptr1 = val1;
    *ptr2 = val2;
    *ptr3 = val3;

    cout << "Contents of the vairables:" << endl;
    cout << "val1: " << val1 << endl;
    cout << "val2: " << val2 << endl;
    cout << "val3: " << val3 << endl;

    cout << "Contents of the pointers:" << endl;
    cout << "ptr1: " << *ptr1 << endl;
    cout << "ptr2: " << *ptr2 << endl;
    cout << "ptr3: " << *ptr3 << endl;

    cout << "Memory addresses of the pointers:" << endl;
    cout << "ptr1: " << ptr1 << endl;
    cout << "ptr2: " << ptr2 << endl;
    cout << "ptr3: " << ptr3 << endl;

    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}