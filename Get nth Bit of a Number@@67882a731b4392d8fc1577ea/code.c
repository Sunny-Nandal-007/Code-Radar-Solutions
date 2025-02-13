// Your code here...
#include<stdio.h>

int main(){ 
    int num,n,bit;
    
    scanf("%d %d",&num,&n);
    bit = num >> n;
    (bit & 1)?printf("1"):printf("0");
    
    return 0;
    
}