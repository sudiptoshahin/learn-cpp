#include<iostream>
using namespace std;

int main() {
    // int num1 = 10;
    // double floatPoint = 10.00;
    // char ch = 'a';
    // string str = "HELLO__WORLD";
    // bool isActive = false;

    /***
     * << ---- insertion operator
     * >> ---- extraction operator
     */
    
    string name = "Sudipto Shahin";
    string age = "30";
    int count = 10;
    double amount = 1000;

    int x = 5, y = 7, z = 50;

    cout << "Hello__world\n";
    cout << "Have a nice day.." << endl;
    cout << "I'm learning Cpp\n";

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Count: " << count << endl;
    cout << "Amount: " << amount << endl;
    cout << "Total: " << (count * amount) << endl;

    const int MIN_PER_HOUR = 60;
    const float PI = 3.14;

    /** calculate the area of a rectangle */
    int length = 4;
    int width = 6;
    int area;

    area = length * width;
    
    cout << "\n\nLength: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area of the rectangle is: " << area << endl;


    cout << 12 % 3 << endl;


    return 0;
}