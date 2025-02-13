// MSB VALUE IS 1 >> Msb position
#include<stdio.h>

int main(){
    int a,b,msb;
    scanf("Enter a number :%d",&a);
    b=sizeof(a);
    msb=1>>b;
    if(msb==1)?printf("Set"):printf("Not Set");
    return 0;
    
}