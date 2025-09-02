// In C++, a class is a user-defined data type that serves as a blueprint for creating objects. It encapsulates data members (variables) and member functions (methods) that define the properties and behaviors of the objects created from it.

// syntx of class:

// class class_name{
    // data member [attributes or properties or varibles]

    // member function [methods or behaviors]

// };

// syntax of object:
// class_name object_name;


// Access specifiers:
1] public
2] private [default]
3] protected

// Example: 

#include<iostream>
using namespace std;

class Bike{
    
    // private:
    
    public:
    // data member [attributes or properties or varibles]
    string company = "ola";
    float price = 1.5;
    string color = "Orange";
    
    private:
    // member function [methods or behaviors]
    string horn(){
        return "POooooo....";
    }
    
    void get_data(){
        cout<<"Bike information:"<<endl;
        cout<<"Comapny name is "<<company;
    }
    
};

int main(){
    Bike b1;
    
    
    // Access data member from the Bike class
    cout<<b1.company<<endl;
    
    // |Access member function from the Bike class
    // b1.get_data();
    
    
    return 0;
}


// Example-2
#include<iostream>
using namespace std;

class Bike{
    
    // private:
    
    public:
    // data member [attributes or properties or varibles]
    string company;
    float price;
    string color;
    
    // private:
    public:
    // member function [methods or behaviors]
    string horn(){
        return "POooooo....";
    }
    
    void get_data(){
        cout<<"Bike information:"<<endl;
        cout<<"Comapny name is "<<company<<endl;
        cout<<"Bike price is: "<<price<<endl;
        cout<<"Bike color is: "<<color<<endl<<endl;
    }
    
};

int main(){
    Bike b1, b2;
    
    b1.company = "ola";
    b1.price = 1.2;
    b1.color = "red";
    
    b2.company = "ola";
    b2.price = 1.5;
    b2.color = "blue";
    
    b1.get_data();
    cout<<b1.horn()<<endl;
    
    b2.get_data();
    cout<<b2.horn()<<endl;
    
    
   
    
    
    return 0;
}