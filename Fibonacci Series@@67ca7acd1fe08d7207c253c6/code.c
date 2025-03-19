// Your code here...
int fibonacciSeries(int n,int i){
    if (n <= 0) return 0;
    if (n == 1) return 1;
    i=fibonacciSeries(n - 1) + fibonacciSeries(n - 2);
    
    return 0;
    print("%d",i);
    
}