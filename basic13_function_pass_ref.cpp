#include <iostream>
#include <vector>

using namespace std;

void swapNums(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

int main() {

    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: " << endl;
    cout << "First number: " << firstNum << endl;
    cout << "Second number: " << secondNum << endl;

    swapNums(firstNum, secondNum);
    cout << "After swap: " << endl;
    cout << "First number: " << firstNum << endl;
    cout << "Second number: " << secondNum << endl;
    return 0;
}