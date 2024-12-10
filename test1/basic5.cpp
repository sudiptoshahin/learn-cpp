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

    for (int i=0; i<5; i++) {
        cout << "idx: " << i << " Hello world" << endl;
    }

    int nums[] = {1, 3, 5, 6, 7};
    // for each loop
    for (int num: nums) {
        //  print only even
        if(num % 2 == 0) continue;
        cout << num << " ";
    }
    cout << endl;

    int count = 0;
    while (count < 10) {
        if (count == 4) {
            count++;
            continue;
        }
        cout << count << endl;
        count++;
    }



}