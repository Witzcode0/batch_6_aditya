// In the context of C++, a constructor is a special member function of a class that is automatically called when an object of that class is created.

// Key characteristics of constructors:
// Same name as the class: A constructor must have the same name as the class it belongs to.
// No return type: Constructors do not have a return type, not even void.
// Automatic invocation: They are automatically invoked when an object of the class is instantiated.
// Initialization: Their main role is to initialize the object's member variables.
// Can be overloaded: A class can have multiple constructors with different parameters, allowing for various ways to initialize objects (e.g., default constructor, parameterized constructors).
// Memory allocation (in C++): While constructors primarily focus on initialization, they can also be involved in dynamic memory allocation for the object's members using operators like new.

// Example of Constructor and Destructor

#include <iostream>
using namespace std;

class person{
    private:
    string username;
    string password;
    
    public:
    // default constructor
    person(){
        cout<<"Constructor called!!!";
    }
    // setter method/parameterized constructor
    person(string u, string p){
        username = u;
        password = p;
        
    }
    
    // // get data
    void Display(){
        cout<<endl<<"Person information: "<<endl;
        cout<<"Username is: "<<username<<endl;
        cout<<"Password is: "<<password;
    }
    
    ~person(){
        cout<<endl<<"I am a destructor"<<endl;
    }
};

int main() {
    // person p1;
    person p1("bit@07", "12345"), p2("xyz_234", "admin");
    p1.Display();
    p2.Display();
    
    

    return 0;
}