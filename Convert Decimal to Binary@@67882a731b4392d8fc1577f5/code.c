// Your code here...
#include <stdio.h>

void decimal_to_binary(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    
    int bits = sizeof(num) * 8; 

    for (int i = bits - 1; i >= 0; i--) {
        
        int bit = (num >> i) & 1;
        
        
        printf("%d", bit);
    }
}

int main() {
    int num;
    scanf("%d", &num);
    decimal_to_binary(num);
    
    
    return 0;
}
