// Your code here...
#include <stdio.h>
#include <ctype.h>

int main() {   
    char a;
    
    
    scanf("%c",&a);
    a=tolower(a);

    if ((a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') ){
        printf("Vowel");
    }    
    else if('a'>=a && 'z'>=a){
        printf("Consonant");
    }
    else if('0'>= a && '9'>=a ){
        printf("Digit");

    }
    else{
        printf("Special Character");
    }
    return 0;
}