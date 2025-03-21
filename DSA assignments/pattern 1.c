//sam is making a pattern an n-dimensional array represented by  the pattern nxn filled with '*'. he is given a number n, and he has to make a pattern of n rows and n columns. the pattern is as follows:
#include <stdio.h>
#include <stdlib.h>
void print_pattern(int n) {
    // Allocate memory for the 2D array
    char** pattern = (char**)malloc(n * sizeof(char*));
    for (int i = 0; i < n; i++) {
        pattern[i] = (char*)malloc((n + 1) * sizeof(char)); // +1 for null terminator
    }

    // Fill the pattern with '*'
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            pattern[i][j] = '*';
        }
        pattern[i][n] = '\0'; // Null-terminate each row
    }

    // Print the pattern
    for (int i = 0; i < n; i++) {
        printf("%s\n", pattern[i]);
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