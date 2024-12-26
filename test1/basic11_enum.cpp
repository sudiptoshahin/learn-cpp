#include <iostream>

using namespace std;

enum Level {
    LOW = 10,
    MEDIUM = 23,
    HIGH = 55
};

// enum AnotherLevel {
//     SSSS=1,
//     XXX=2,
//     LLL=3
// };

int main()
{
    enum Level level = LOW;
    // enum AnotherLevel anotherLevel = SSSS;

    cout << "Level: " << level << endl;
    // cout << "Another Level" << anotherLevel << endl;

    return 0;
}