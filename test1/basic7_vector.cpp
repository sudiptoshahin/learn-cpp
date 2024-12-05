#include<iostream>
#include<vector>

using namespace std;

int main() {

    vector<string> cars = {"Volvo", "BMW", "Ford"};

    for (int i=0; i<size(cars); i++) {
        cout << cars[i] << " ";
    }
    cout << endl;
    cout << "1st element: " << cars.front() << endl;
    cout << "last element: " << cars.back() << endl;

    cout << "Access element with vec.at(1)" << cars.at(1) << endl;
    cout << "Change the vector element and add item (Tesla): " << endl;
    cars[0] = "Mustang";
    cars.push_back("Tesla");
    
    for (string car: cars) {
        cout << car << " " << endl;
    }
    cout << endl;

    return 0;
}