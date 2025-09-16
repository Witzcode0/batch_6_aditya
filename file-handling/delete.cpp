#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int res = remove("new_file.txt");
    if (res == 0){
        cout<<"File deleted";
    }else{
        cout<<"Unable to delete the file";
    }
    return 0;
}
