//nth term fibonacci series using formula f(n)=f(n-1)+f(n-2) where f(1)=1 and f(2)=1 indexing start from 1
#include <stdio.h>
int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n;
    printf("Enter the term number: ");
    scanf("%d", &n);
    printf("The %dth term of the Fibonacci series is: %d\n", n, fibonacci(n));
    return 0;
}