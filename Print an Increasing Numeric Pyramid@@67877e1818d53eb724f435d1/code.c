// Your code here...
#include <stdio.h>

int main(){
    int N;
    
    scanf("%d",&N);
    
    for (int i=1; i<N+1;i++){
        
        for (int j=0;j<N-i-1;j++){
            printf(" ");
        }
        for (int k=1;k<i-1;k++){
                printf("%d ",k);
                
            }
        printf("\n");
    }
    return 0;
}