// Your code here...
#include <stdio.h>

int main(){
    int N;
    
    scanf("%d",&N);
    
    for (int i=1; i<=N;i++){
        for (int j=0;j<N;j++){
            if((j==0 || j==N) && (i==1 || i==N-1)){
            printf("*");    
            }
            
        }
        printf("\n");   
    }
    return 0;
}