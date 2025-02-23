// Your code here...
#include <stdio.h>

int main(){
    int N;
    
    scanf("%d",&N);
    
    for (int i=0; i<N;i++){
        
        for (int j=0;j<N-i-1;j++){
            printf(" ");
        }
        for (int k=1;k=<2*i+1;k++){
                printf("%d ",k);
                
            }
        printf("\n");
    }
    return 0;
}