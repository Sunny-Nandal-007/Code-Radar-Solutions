// Your code here...
// Your code here...
#include <stdio.h>


int main() {
    int num,num2;
    scanf("%d %d", &num,&num2);
    if (num>0 && num2>0 || num<0 && num2<0 ){
        printf("Same Sign\n");
        
    }
    else{
        printf("Different Sign\n");
    }
    return 0;
}