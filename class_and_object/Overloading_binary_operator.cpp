#include <iostream>
using namespace std;
 
class Point{
    int x, y;
    public:
    Point(){
        x = 0;
        y = 0;
    }
    Point(int a, int b){
        x = a;
        y = b;
    }
    Point operator - (Point p){
        return Point((x - p.x), (y - p.y));
    }
    
    void display(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
  
};

int main() {
   Point p1(10, 20), p2(5, 7);
   Point p3 = p1 - p2;
   p3.display();
    
    return 0;
}