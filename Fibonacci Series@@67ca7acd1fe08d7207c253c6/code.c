// Your code here...
void fibonacciSeries(int n){
    void fibonacciSeries(int n) {
    static int a = 0, b = 1; // Using static to retain values between function calls

    if (n <= 0) return;

    printf("%d ", a);

    int next = a + b;
    a = b;
    b = next;

    fibonacciSeries(n - 1); // Recursive call
}
}