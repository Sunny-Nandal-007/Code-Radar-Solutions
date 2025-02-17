#include <stdio.h>

void decimal_to_binary(int num) {
    // Handle the case where the number is 0
    if (num == 0) {
        printf("0");
        return;
    }

    // Find the position of the most significant bit (MSB)
    int bits = sizeof(num) * 8; // 32 bits for a 4-byte integer
    int leading_zero = 1;

    // Traverse each bit starting from the most significant bit (MSB)
    for (int i = bits - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;  // Extract the bit at position i

        // Skip leading zeros
        if (bit == 1) {
            leading_zero = 0;
        }

        // If we've encountered a 1, print the bit
        if (!leading_zero) {
            printf("%d", bit);
        }
    }
}

int main() {
    int num;
    scanf("%d", &num);

    
    decimal_to_binary(num);
    printf("\n");

    return 0;
}
