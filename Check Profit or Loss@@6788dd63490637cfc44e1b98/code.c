
#include <stdio.h>

int main() {
    int cost_price,sell_price;

    
    if (cost_price<sell_price) {
        printf("Profit");
    }
    else if (cost_price>sell_price) {
        printf("Loss");
    
    }
    else {
        printf("No Profit No Loss"); 
    }

    return 0;
}
