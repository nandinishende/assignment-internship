// reverse the integers 
#include <stdio.h>
#include <limits.h>
int reverse(int x) {
    int reversed = 0;
    while (x != 0) {
        int digit = x % 10;
        x /= 10;

        // Check for overflow
        if (reversed > (INT_MAX - digit) / 10) {
            return 0; // Overflow occurred
        }
        reversed = reversed * 10 + digit;
    }
    return reversed;
}
int main() {
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    int result = reverse(x);
    if (result == 0) {
        printf("Overflow occurred\n");
    } else {
        printf("Reversed integer: %d\n", result);
    }
    return 0;
}