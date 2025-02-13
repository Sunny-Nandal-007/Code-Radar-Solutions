// MSB VALUE IS 1 >> Msb position
#include<stdio.h>

int main(){
    int a,b,msb;
    printf("Enter a number :");
    scanf("%d",&a);
    b=sizeof(a)*8 - 1;
    msb=a>>b;
    if(msb&1 ==1)?printf("Set\n"):printf("Not Set\n");
    return 0;
    
}