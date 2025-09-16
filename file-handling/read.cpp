#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file;
    string data;
    file.open("example.txt");
    while(getline(file, data)){
        cout<<"Data : "<<data;
    }
    file.close();
    return 0;
}
