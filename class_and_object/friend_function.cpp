#include <iostream>
using namespace std;

class ATM{
    int pin = 1123;
    
    friend void usePrivateDate(ATM data);
};

void usePrivateDate(ATM data){
    cout<<data.pin;
}



int main() {
    
    ATM p1;
    usePrivateDate(p1);
    
    // cout<<p1.pin;
    
    
    return 0;
}