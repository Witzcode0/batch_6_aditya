#include <stdio.h>

int main() {
    int a = 10, b = 0;
    
    if (b != 0){
        int res = a / b;
        printf("%d",res);
    }else{
        printf("Error: zero division.");
    }
    

    return 0;
}