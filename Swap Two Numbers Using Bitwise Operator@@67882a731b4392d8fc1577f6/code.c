// Your code here...
#include <stdio.h>

int main() {
    int a,b;
    
    scanf("%d %d",&a,&b);
    a=a^a;
    b=b^b;
    printf("%d %d",a,b)
    return 0;
}