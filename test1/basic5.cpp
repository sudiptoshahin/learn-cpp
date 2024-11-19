#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
    int numbers = 12345;
    int revNumbers = 0;

    while (numbers) {
        revNumbers = revNumbers * 10 + numbers % 10;
        //  remove the last number of 'numbers
        numbers /= 10;
    }

    cout << "Reserved numbers: " << revNumbers << "\n";

}