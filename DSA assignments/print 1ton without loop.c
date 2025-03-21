//you are given an integer n, task is to return an array conataining integers from 1to n (increasing order) without using loops
#include <stdio.h>
#include <stdlib.h>
int* print_numbers(int n) {
    int* arr = (int*)malloc(n * sizeof(int)); // Allocate memory for the array
    if (arr == NULL) {
        return NULL; // Memory allocation failed
    }
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1; // Fill the array with numbers from 1 to n
    }
    return arr;
}
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int* result = print_numbers(n); // Call the function to get the array
    if (result != NULL) {
        printf("Numbers from 1 to %d:\n", n);
        for (int i = 0; i < n; i++) {
            printf("%d ", result[i]); // Print the numbers
        }
        printf("\n");
        free(result); // Free the allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }
    return 0;
}  