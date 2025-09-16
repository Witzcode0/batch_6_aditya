#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file_i;
    ofstream file_o;
    // put-write, get-read
    char ch;
    file_i.open("example.txt");
    file_o.open("new_file.txt");
    while(file_i.get(ch)){
        file_o.put(ch);
    }
    cout<<"Data copied!!!";
    file_i.close();
    file_o.close();
    return 0;
}

