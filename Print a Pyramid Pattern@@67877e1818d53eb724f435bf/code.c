// Your code here...
#include <stdio.h>

int main(){
    int N;
    
    scanf("%d",&N);
    
    for (int i=1; i<=N;i++){
        for (0;i-1;){
        printf(" ");
        }
       
        for (int j=0;j<i;j++){
            printf("*");
              
        }
        printf("\n");       
    }
    return 0;
}