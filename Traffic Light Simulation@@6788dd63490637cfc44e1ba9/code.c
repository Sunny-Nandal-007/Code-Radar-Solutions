// Your code here...
#include <stdio.h>


int main() {
    char light;
    scanf("%d", &light);
    switch(light){
        case 'G':printf("Go\n");
        break;
        case 'Y':printf("Slow Down\n");
        break;
        case 'R':printf("Stop\n");
        break; 
        default:
        printf("Invalid input");
    }
    return 0;
}