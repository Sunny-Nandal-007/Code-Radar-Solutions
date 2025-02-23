// Your code here...
// Your code here...
#include <stdio.h>

int main(){
    int N;
    char Alph;
    
    scanf("%d",&N);
    
    for (int i=0; i<N;i++){
        Alph='A';
        for (int j=0;j<N-i;j++){
            printf("%c ",Alph);
            Alph+=1;
            }
        

        printf("\n");
        
    }
    return 0;
}