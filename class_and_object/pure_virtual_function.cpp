#include <iostream>
using namespace std;

class Animal{
    public:
    virtual void voice() = 0; // Pure virtual function
};

class Dog: public Animal{
    void voice() override {
        cout<<"Woaf Woaf"<<endl;
    }
};
class Cat: public Animal{
    void voice() override {
        cout<<"Meo meo"<<endl;
    }
};

int main() {
   Animal* D = new Dog();
   Animal* C = new Cat();
   
   D->voice();
   C->voice();
};