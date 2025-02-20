// Your code here...
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num<=1){
        printf("Not Prime");
        return 0;
    }
    for(int i=2,i=num){
    if (num%i==0) {
        printf("Not Prime");
        break;
    } 
    else {
        continue;
    }
    printf("Prime")
    }
    return 0;
}
