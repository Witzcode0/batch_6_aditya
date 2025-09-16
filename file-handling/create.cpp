#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream file;
    file.open("example.txt");
    cout<<"File is created successfully.";
    file.close();
    return 0;
}
