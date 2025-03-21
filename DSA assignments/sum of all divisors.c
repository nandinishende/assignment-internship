//given an intger n, find the sum of all divisors(i) from 1 to n
#include <stdio.h>
int sum_of_divisors(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    int result = sum_of_divisors(n);
    printf("Sum of all divisors of %d is: %d\n", n, result);
    return 0;
}