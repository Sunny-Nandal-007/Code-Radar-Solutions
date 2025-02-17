// Your code here...
#include<stdio.h>

int main(){ 
    int num,final_num,2scomp,position;
    
    scanf("%d",&num);
    2scomp=~num +1;
    final_num=num & 2scomp;
    position = __builtin_ctz(final_num);

    
    
    return 0;
    
}