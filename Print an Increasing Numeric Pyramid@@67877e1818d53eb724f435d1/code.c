// Your code here...
#include <stdio.h>

int main(){
    int N,count;
    
    scanf("%d",&N);
    
    for (int i=0; i<N;i++){
        count=1;
        for (int j=0;j<N-i-1;j++){
            printf(" ");
        }
        for (int k=0;k<2*i+1;k++){
                printf("%d ",count);
                count++;
            }
        printf("\n");
    }
    return 0;
}