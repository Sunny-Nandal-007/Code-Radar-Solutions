// Your code here...
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num>=1 && 100>=num) {
        printf("In Range");
    } 
    else {
        printf("Out of Range");
    }

    return 0;
}
