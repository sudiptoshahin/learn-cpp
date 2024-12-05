#include<iostream>

using namespace std;

int main() {

    string cars[4] = {"Volvo", "BMW", "Mazda", "Ford"};
    for (string car: cars) {
        cout << car << ", ";
    }
    cout << endl;

    int myNumbers[5] = {10, 20, 30, 40, 50};
    int len = sizeof(myNumbers) / sizeof(myNumbers[0]);
    cout << "Get length with sizeof(myNumbers) / sizeof(myNumbers[0]" << endl;
    cout << 'sizeof(myNumbers): ' << sizeof(myNumbers) << endl;
    cout << 'sizeof(myNumbers[0]: ' << sizeof(myNumbers[0]) << endl;
    
    for (int i=0; i<len; i++) {
        cout << myNumbers[i] << ", ";
    }
    cout << endl;

    int numbers[] = {1, 4, 6, 7};
    
    for (int i=0; i<size(numbers); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // get length with memory addr calculation
    int length = *(&numbers + 1) - numbers;
    cout << "Address: " << &numbers << endl;
    cout << "Address + 1: " << &numbers + 1 << endl;
    cout << "Numbers: " << numbers << endl;
    cout << "Len: " << length << endl;
    cout << "By using sizeof(): " << sizeof(numbers)/sizeof(numbers[0]) << endl;

    return 0;
}