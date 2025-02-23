// Your code here...
#include <stdio.h>

int main(){
    int N,count;
    
    scanf("%d",&N);
    
    for (int i=1; i<=N;i++){
        count=1;
        for (int j=N-i;j>=0;j--){
            printf("%d ",count); 
            count++;   
        }
        printf("\n"); 
             
    }
    return 0;
}
