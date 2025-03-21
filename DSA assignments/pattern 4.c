//sam is making a trisngular painting for a maths project an n represented by lower triangle  filled with integer representing the row number for every value of n help sma to print the corresponding pattern
#include <stdio.h>
#include <stdlib.h>
void print_pattern(int n) {
    // Allocate memory for the 2D array
    int** pattern = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        pattern[i] = (int*)malloc((i + 1) * sizeof(int)); // Allocate memory for each row
    }

    // Fill the pattern with integers representing the row number
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            pattern[i][j] = i + 1; // Fill with the row number (i + 1)
        }
    }

    // Print the pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", pattern[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        free(pattern[i]);
    }
    free(pattern);
}
int main() {
    int n;
    printf("Enter the size of the pattern (n): ");
    scanf("%d", &n);
    print_pattern(n); // Call the function to print the pattern
    return 0;
}