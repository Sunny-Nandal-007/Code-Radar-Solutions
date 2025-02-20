// Your code here...
#include <stdio.h>
#include <math.h>

int main() {
    int num,stop;
    scanf("%d", &num);
    stop=sqrt(num)
    if (num<=1){
        printf("Not Prime");
        return 0;
    }
    for(int i=2;i<stop+1;i++){
    if (num%i==0) {
        printf("Not Prime\n");
        return 0;
    } 
    
    }
    printf("Prime\n");
    return 0;
}
