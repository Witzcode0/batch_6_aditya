#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file;

    // open file in append mode
    file.open("example.txt", ios::app);

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string data;
    cout << "Enter text to append: ";
    getline(cin, data);

    file << data << endl;  // append data

    cout << "Data appended successfully!" << endl;

    file.close();
    return 0;
}
