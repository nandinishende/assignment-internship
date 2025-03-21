//sam is making a triangulsr painting for a maths project an n represented by lower triangle  filled with integer strting from 1.
//for evry value of n  and he has to make a pattern of n rows and n columns. the pattern is as follows example n=3 output = 1,1 2 , 1 2 3:
#include <stdio.h>
#include <stdlib.h> 
void print_pattern(int n) {
    // Allocate memory for the 2D array
    int** pattern = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        pattern[i] = (int*)malloc((i + 1) * sizeof(int)); // Allocate memory for each row
    }

    // Fill the pattern with integers
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            pattern[i][j] = j + 1; // Fill with integers starting from 1
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