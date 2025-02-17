// Your code here...
#include <stdio.h>

int main() {
    int a,b;
    
    scanf("%d %d",&a,&b);
     a = a ^ b;  // 1: a becomes a ^ b
    b = a ^ b;  // 2: b becomes (a ^ b) ^ b, which is a
    a = a ^ b;  // 3: a becomes (a ^ b) ^ a, which is b
    printf("%d %d",a,b);
    return 0;
}