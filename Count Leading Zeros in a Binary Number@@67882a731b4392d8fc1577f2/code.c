// Your code here...
#include<stdio.h>
#include <stdint.h> 

int main(){ 
    int num,position;
    
    scanf("%d",&num);
    position = __builtin_clz(num);
    printf("%d",31-position);
    return 0;
    
}