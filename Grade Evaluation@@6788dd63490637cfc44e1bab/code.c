// Your code here...
#include <stdio.h>


int main() {
    int num;
    scanf("%d", &num);
    switch(num){
        case 'A':printf("Excellent\n");
        break;
        case 'B':printf("Good\n");
        break;
        case 'C':printf("Average\n");
        break;
        case 'D':printf("Below Average\n");
        break;
        case 'E':printf("Fail\n");
        break;
        default:
        printf("Invalid grade");
    }
    return 0;
}