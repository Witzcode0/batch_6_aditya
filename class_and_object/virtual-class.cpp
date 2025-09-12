#include <iostream>
using namespace std;

class A{
    public:
        int num = 30;
        
};

class B: virtual public A{
    void display(){
        cout<<"Class B : "<<num<<endl;
    }
};
class C:virtual public A{
    void display(){
        cout<<"Class C : "<<num<<endl;
    }
};

class D: public B, public C{
    
};

int main() {
   D obj;
   cout<<obj.num;
    return 0;
};