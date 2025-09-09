#include <iostream>
using namespace std;

class A{
    protected:
    void a(){
        cout<<"I am a method a"<<endl;
    }
};
class B: public A{
    public:
    void b(){
        a();
        cout<<"I am a method b"<<endl;
    }
};

int main() {
    B obj;
    obj.b();
  	
    return 0;
}
