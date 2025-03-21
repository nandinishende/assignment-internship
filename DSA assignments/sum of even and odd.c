//write a program to input an integer 'n' and print the sum of its even digits and sum of its odd digits separately.
#include <stdio.h>  
int main() {
    int n, even_sum = 0, odd_sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    while (n != 0) {
        int digit = n % 10; // Get the last digit
        if (digit % 2 == 0) {
            even_sum += digit; // Add to even sum
        } else {
            odd_sum += digit; // Add to odd sum
        }
        n /= 10; // Remove the last digit
    }
    
    printf("Sum of even digits: %d\n", even_sum);
    printf("Sum of odd digits: %d\n", odd_sum);
    
    return 0;
}