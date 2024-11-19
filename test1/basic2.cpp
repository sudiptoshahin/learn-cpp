#include<iostream>
#include<string>
using namespace std;

int main() {

    /** users input */
    int x, y;
    cout << "Type a number: ";
    cin >> x;
    cout << "Enter another number: ";
    cin >> y;
    cout << "Sum: " << (x+y) << endl;

    int items = 50;
    float cost_per_items = 9.99;
    double total_cost = items * cost_per_items;
    char currency = '$';

    cout << "Number of items: " << items << endl;
    cout << "Cost per item: " << cost_per_items << endl;
    cout << "Total cost = " << total_cost << "" << currency << endl;

    return 0;
}