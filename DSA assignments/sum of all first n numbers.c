//you are given a number n. you have to find the sum of all first n  natural numbers and returning it.
#include <stdio.h>
int sum_of_n(int n) {
    if (n <= 0) {
        return 0; // Base case: if n is 0 or negative, return 0
    }
    return n + sum_of_n(n - 1); // Recursive case: n + sum of first (n-1) natural numbers
}
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int result = sum_of_n(n); // Call the function to calculate the sum
    printf("Sum of first %d natural numbers is: %d\n", n, result);
    return 0;
}