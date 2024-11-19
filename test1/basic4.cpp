#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
    cout << sqrt(64);
    cout << round(2.6);

    int myAge = 25;
    int votingAge = 18;

    // if (myAge >= votingAge) {
    //     cout << "Old enough to vote!";
    // } else {
    //     cout << "Not old enough to vote";
    // }

    string result =  (myAge >= votingAge) ?
    "\nOld enough to vote!" :
    "\nNot old enough to vote";

    cout << result;

    int countdown = 3;
    while (countdown > 0) {
        cout << countdown << "\n";
        countdown--;
    }

    cout << "Happy new year!!\n";


    return 0;
}