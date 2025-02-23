// Your code here...
#include <stdio.h>

int main(){
    int N,count;
    count=1;
    scanf("%d",&N);
    
    for (int i=1; i<=N;i++){
        for (int j=0;j<i;j++){
            printf("%d ",count); 
            count++;   
        }
        printf("\n");       
    }
    return 0;
}
