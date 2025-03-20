// Your code here...

int printPrimesInRange(int a, int b){
    int i;
    for (i>a;i<b;i++){
    if (num<=1){
        return 0;
    }
    for (int i=2;i*i<=num;i++){
        if (num%i==0){
            continue;
        }
        else{
            printf("%d",i);

        }

    }
    
    }
    return 0;
}
