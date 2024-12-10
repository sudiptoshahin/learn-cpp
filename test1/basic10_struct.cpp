#include<iostream>
#include<vector>

using namespace std;

struct Person {
    string uid;
    string name;
    int age;
};

int main() {
    struct {
        string uid;
        string name;
        int age;
    } person;

    person.uid = "#0001";
    person.name = "Sudipto Shahin";
    person.age = 20;

    cout << "UID: " << person.uid << endl;
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;

    vector<Person> persons = {};
    persons.push_back({ "#001", "Test user1", 20 });
    persons.push_back({ "#002", "Test user2", 35 });
    persons.push_back({ "#003", "Test user3", 60 });

    cout << "UID\t"  << " NAME\t\t" << "AGE" << endl;
    for (const auto& person: persons) {
        cout << person.uid << "\t" << person.name << "\t" << person.age << endl;
    }


    return 0;
}