// Your code here...
#include<stdio.h>
#include <stdint.h> 

int main(){ 
    int num,position;
    
    scanf("%d",&num);
    position = __builtin_clz(num);
    printf("%d",position);
    return 0;
    
}