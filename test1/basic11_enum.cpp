#include <iostream>

using namespace std;

// enum Level {
//     LOW,    0
//     MEDIUM, 1
//     HIGH    2
// };

enum Level {
    LOW = 10,
    MEDIUM = 23,
    HIGH = 55
};

int main()
{
    enum Level level = LOW;

    cout << "Level: " << level << endl;

    return 0;
}