// Your code here...
#include<stdio.h>

int main(){ 
    int num,n,bit,final_num;
    
    scanf("%d %d",&num,&n);
    bit=~(1<<n);
    final_num=num & bit;
    printf("%d",final_num);
    
    return 0;
    
}