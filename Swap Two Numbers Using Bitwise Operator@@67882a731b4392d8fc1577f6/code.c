// Your code here...
#include <stdio.h>

int main() {
    int a,b;
    
    scanf("%d %d",&a,&b);
    b=(a^a)^a;
    a=(b^b)^b;
    printf("%d %d",a,b);
    return 0;
}