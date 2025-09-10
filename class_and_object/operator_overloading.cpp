#include <iostream>
using namespace std;

class Number{
    int x;
    
    public:
    Number(){
        x = 0;
    }
    
    Number(int a){
        x = a;
    }
    
    Number operator + (Number n){
        Number temp;
        temp.x = x + n.x;
        return temp;
    }
    
    void display(){
        cout<<"Value: "<<x<<endl;
    }
};

int main() {
    // syntax:
    
    // return_type operator symbol(paras){
        // code
    // }
    
    Number n1(5), n2(10), n3;
    n3 = n1 + n2; // calls operator overloading
    n3.display();
    
    
    
    

    return 0;
}