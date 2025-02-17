#include <stdio.h>

int main() {   
    char alphabet;
    scanf("%c",&alphabet);
     if ('A'<= alphabet <= 'Z'){
        printf("Uppercase");
    }    
    else{
        printf("Lowercase");
    }
    return 0;
}