// Your code here...
#include <stdio.h>

int main() {   
    int year;
    scanf("%d",&year);
     if (year%5==0 && year%11==0){
        printf("Divisible");
    }    
    else{
        printf("Not Divisible");
    }
    return 0;
}