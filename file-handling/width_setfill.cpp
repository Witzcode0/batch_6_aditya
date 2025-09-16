#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int num = 42;

    cout << "Default: ";
    cout.width(6); cout << num << endl;

    cout << "With setfill('*'): ";
    cout << setfill('*');
    cout.width(6); cout << num << endl;

    return 0;
}
