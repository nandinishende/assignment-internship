//a prime number is a number that is  divisible by exactly 2 integer by 1 and itself. find out whther a n is prime or not
#include <stdio.h>
#include <stdbool.h>
bool is_prime(int n) {
    if (n <= 1) {
        return false; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i * i <= n; i++) { // Check divisibility up to the square root of n
        if (n % i == 0) {
            return false; // n is divisible by i, so it's not prime
        }
    }
    return true; // n is prime
}
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (is_prime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}