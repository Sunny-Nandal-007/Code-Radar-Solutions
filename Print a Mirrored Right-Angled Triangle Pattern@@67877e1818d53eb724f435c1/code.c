#include <stdio.h>

int main(){
    int N;
    
    scanf("%d",&N);
    
    for (int i=1; i<=N;i++){
        for (int k=0;k<N-1,k++)
        for (int j=0;j<i;j++){
            printf("* ");    
        }
        printf("\n");       
    }
    return 0;
}
