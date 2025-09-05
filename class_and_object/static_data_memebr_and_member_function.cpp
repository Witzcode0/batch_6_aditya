// A static member function in C++ is a function that belongs to the class rather than any specific object of the class. It is declared using the static keyword inside the class definition.

// Key points:

// Can be called without creating an object.
// Only has access to static data members or other static functions.
// Useful when a function’s logic is independent of object state.

#include <iostream>  
using namespace std; 

class Box  
{  
    private:  
    static int length; 
    static int breadth;  
    static int height;  
    
    public:
    
    static void print()  
    {  
        cout << "The value of the length is: " << length << endl;  
        cout << "The value of the breadth is: " << breadth << endl;  
        cout << "The value of the height is: " << height << endl;  
    }
};  

// initialize the static data members  

int Box :: length = 10;  
int Box :: breadth = 20;  
int Box :: height = 30;  

// Driver Code
  
int main()  
{
    
    Box b;  
    
    cout << "Static member function is called through Object name: \n" << endl;  
    b.print();  
    
    cout << "\nStatic member function is called through Class name: \n" << endl;  
    Box::print();  
    
    return 0;  
}