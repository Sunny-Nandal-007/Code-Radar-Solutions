// Your code here...
#include <stdio.h>

int main(){
    int N;
    
    scanf("%d",&N);
    
    for (int i=1; i<=N;i++){
        for (int j=0;j<N;j++){
            if(i==1 || i==N){
            printf("*");    
            }
            else if((i!=1 && i!=N)&&(j==0 || j==N-1)){
                printf("*"); 
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");   
    }
    return 0;
}