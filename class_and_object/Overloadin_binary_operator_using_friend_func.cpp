#include <iostream>
using namespace std;
 
class Complex{
    int real, imag;
    
    public:
    Complex(){
        real=0;
        imag=0;
    }
    Complex(int r, int i){
        real = r;
        imag = i;
    }
    
    friend Complex operator + (Complex c1, Complex c2);
    
    void display(){
        cout<<real<<"+"<<imag<<"j"<<endl;
    }
  
};

Complex operator + (Complex c1, Complex c2){
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
  Complex c1(3, 4), c2(5, 6);
  Complex c3 = c1 + c2;
  c3.display();
    
    return 0;
}