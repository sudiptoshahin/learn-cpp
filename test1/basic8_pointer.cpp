#include<iostream>
using namespace std;

void incrementByValues(int *v) {
    (*v)++;
}

void incrementByAddress(int *v) {
    (v)++;
}

int main() {


    int a = 8;
    cout << "Enter the value of (a)" << endl;
    cin >> a;
    /**
     * here
     * int* a_pointer = holds the memory address of a
     * a_pointer = returns the memory address
     * (*a_pointer) = returns the value of a
     * 
     * &a = returns the memory address
     */
    int* a_pointer = &a;
    
    cout << "address of a(a_pointer): " << a_pointer << endl;
    incrementByAddress(a_pointer);
    incrementByValues(a_pointer);

    cout << "a value: " << a << endl;
    cout << "address of a(a_pointer): " << a_pointer << endl;
    cout << "address of a(value):" << *a_pointer << endl;
    
    
    

    return 0;
}