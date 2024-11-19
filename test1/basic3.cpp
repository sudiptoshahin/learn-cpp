/*** strings */
#include<iostream>
#include<string>

using namespace std;

int main() {

    string firstName = "Sudipto";
    string lastName = "Shahin";
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // concatenation
    cout << "Fullname: " << firstName + " " + lastName << endl;

    cout << "Fullname2: " << firstName.append(lastName) << endl;

    cout << "txt length: " << txt.length() << endl;

    cout << txt[txt.length() - 1];

    cout << txt.at(5);

    /** input string */    
    cout << "\n================\n" << endl;
    string fname;
    string lname;
    string fullName;

    // cout << "First name: ";
    // cin >> fname;
    // cout << "Last name: ";
    // cin >> lname;
    
    // get line input
    cout << "Enter fullname: ";
    getline (cin, fullName);

    // cout << "\nFullname: " << fname+" "+lname << endl;
    cout << "\nFullname: " << fullName << endl;

    return 0;
}