//sam is planting tree on upper half region(separated by the right diagonal) of the square shared fieldfor every value of n print the field if the trees are represented by *
#include <stdio.h>  
#include <stdlib.h>
void print_pattern(int n) {
    // Allocate memory for the 2D array
    char** pattern = (char**)malloc(n * sizeof(char*));
    for (int i = 0; i < n; i++) {
        pattern[i] = (char*)malloc((n + 1) * sizeof(char)); // +1 for null terminator
    }

    // Fill the pattern with '*' and ' '
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j < n - 1) {
                pattern[i][j] = '*'; // Plant a tree
            } else {
                pattern[i][j] = ' '; // Empty space
            }
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