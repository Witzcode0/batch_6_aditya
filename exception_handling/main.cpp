// In C++, try and catch blocks are fundamental components of exception handling, a mechanism for dealing with runtime errors and unexpected events in a structured manner.

// Example-1:#include <iostream>
#include <stdexcept> // For std::runtime_error

double divide(double numerator, double denominator) {
    if (denominator == 0) {
        throw std::runtime_error("Division by zero is not allowed.");
    }
    return numerator / denominator;
}

int main() {
    try {
        double result = divide(10.0, 0.0); // This will throw an exception
        std::cout << "Result: " << result << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    } catch (...) { // Generic catch block for any other exceptions
        std::cerr << "An unknown error occurred." << std::endl;
    }
    return 0;
}

// Without exception handling

// #include <iostream>
// using namespace std;

// int main() {
//     int bal = 1000;
//     int wb;
    
//     cout<<"Enter a withdrow amount: ";
//     cin>>wb;
    
//     if (wb <= bal){
//         int remaining_amount = bal - wb;
//         cout<<"Now, your remaining balance is: "<<remaining_amount<<endl;
//     }else{
//         cout<<"Insufficent balance";
//     }
    

//     return 0;
// }


// With exception handling

#include <iostream>
#include <stdexcept>
using namespace std;

int Transaction(int w, int b){
    if (w <= b){
        int remaining_amount = b - w;
        cout << "Now, your remaining balance is: " << remaining_amount << endl;
        return remaining_amount;  // Return the remaining balance
    } else {
        throw runtime_error("Insufficient balance.");
    }
}

int main() {
    int bal = 1000;
    int wb;
    
    cout << "Enter a withdraw amount: ";
    cin >> wb;
    
    try {
        int new_bal = Transaction(wb, bal);
    } catch (const runtime_error& err) {
        cerr << "ERROR: " << err.what() << endl;
    } catch(...) {
        cerr << "An unknown error occurred." << endl;
    }
    return 0;
}
