// Your code here...
#include <stdio.h>

int main(){
    int N,k;
    
    scanf("%d",&N);
    k=N;
    for (int i=1; i<=N;i++){
        for (int j=k;j>0;j--){
            printf("* ");
            
            
        }
        k-=1;

        printf("\n");
        
    }
    return 0;
}