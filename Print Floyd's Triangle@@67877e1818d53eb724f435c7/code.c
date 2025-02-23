// Your code here...
#include <stdio.h>

int main(){
    int N,count;
    
    scanf("%d",&N);
        count=1;
    
    for (int i=1; i<=N;i++){
        for (int j=0;j<i;j++){
            printf("%d ",count); 
            count++;   
        }
        printf("\n"); 
             
    }
    return 0;
}
