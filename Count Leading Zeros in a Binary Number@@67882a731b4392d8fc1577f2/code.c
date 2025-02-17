// Your code here...
#include<stdio.h>
#include <stdint.h> 

int main(){ 
    int num,final_num,twoscomp,position;
    
    scanf("%d",&num);
    twoscomp=~num;
    final_num=num & twoscomp;
    position = __builtin_ctz(final_num);
    printf("%d",position);
    return 0;
    
}