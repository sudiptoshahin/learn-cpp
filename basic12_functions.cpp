#include <iostream>
using namespace std;

void testFunction(string name="User") {
    cout << "Hello " << name << endl;
}

string getFomattedUser(string fname="MR", string lname="X", int age=0) {
    return fname + " " + lname + " " + to_string(age);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    testFunction("Sudipto");
    testFunction("Shahin");
    testFunction();

    string user = getFomattedUser("Mr", "Sudipto", 25);
    cout << user << endl;
    return 0;
}