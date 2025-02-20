// Your code here...
#include <stdio.h>


int main() {
    int num,num2;
    char op;
    scanf("%d %d %c", &num,&num2,&op);
    switch(op){
        case '+':printf("%d",num+num2);
        break;
        case '-':printf("%d",num-num2);
        break;
        case '*':printf("%d",num*num2);
        break;
        case '/':if (num2 == 0) {
                printf("Error: Division by zero");
            } else {
                printf("%d", num / num2);
            }
            
        break;
        default:
        printf("error");
    }
    return 0;
}