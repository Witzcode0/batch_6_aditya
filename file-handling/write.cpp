#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream file;

    file.open("example.txt");
    file<<"This is a c programming lang.";
    cout<<"Data has been written in the file";
    file.close();

    return 0;
}
