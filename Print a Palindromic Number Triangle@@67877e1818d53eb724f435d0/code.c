// Your code here...
#include <stdio.h>

int main(){
    int N;
    
    scanf("%d",&N);
    
    for (int i=1; i<N+1;i++){
        
        for (int j=0;j<N-i;j++){
            printf(" ");
        }
        for (int k=1;k<=i;k++){
            if (k<N+1){
                printf("%d",k);
            }
            else{
                for (k;k>0;k--){
                k-=1;
                printf("%d",k);
                }
            }
                
            }
        printf("\n");
    }
    return 0;
}