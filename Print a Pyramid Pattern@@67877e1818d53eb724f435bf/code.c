// Your code here...
#include <stdio.h>

int main(){
    int N;
    
    scanf("%d",&N);
    
    for (int i=0; i<N;i++){
        for (int j=0;j<N-i;j++){
            printf(" ");
            for (int k=1;k<2*N-1;k+=2){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}