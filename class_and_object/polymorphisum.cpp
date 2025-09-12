// poly - many
// morphisum - forms

// -  complie time - static binding
//     - operator overloading
//     - function overloading
// -  runtime - dynamic binding
//     - method overriding

// METHOD OVER LOADING

#include <iostream>
using namespace std;

class Math{
    public:
    void sum(int a, int b, int c){
        printf("%d", a + b + c);
    }
    void sum(int a, int b){
        printf("%d", a + b);
    }
};

int main(){
    Math obj;
    obj.sum(10, 20);
    obj.sum(10, 20, 30);
    return 0;
}


#include <iostream>
using namespace std;

class Test1{
    public:
    void info(){
        cout<<"I am from base class"<<endl;
    }
};
class Test2:public Test1{
    public:
    void info(){
        Test1::info();
        cout<<"I am from child class"<<endl;
    }
};

int main(){
    Test2 obj;
    obj.info();
    return 0;
}