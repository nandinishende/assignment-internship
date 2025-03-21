//give an array arr of size n return an array with all the elments placed in reverse order
#include <stdio.h>
#include <stdlib.h>
void reverse_array(int* arr, int n) {
    int* reversed_arr = (int*)malloc(n * sizeof(int)); // Allocate memory for the reversed array
    if (reversed_arr == NULL) {
        return; // Memory allocation failed
    }
    for (int i = 0; i < n; i++) {
        reversed_arr[i] = arr[n - 1 - i]; // Fill the reversed array
    }
    for (int i = 0; i < n; i++) {
        arr[i] = reversed_arr[i]; // Copy back to the original array
    }
    free(reversed_arr); // Free the allocated memory
}
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int)); // Allocate memory for the original array
    if (arr == NULL) {
        return 1; // Memory allocation failed
    }
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read elements into the array
    }
    reverse_array(arr, n); // Call the function to reverse the array
    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Print the reversed array
    }
    printf("\n");
    free(arr); // Free the allocated memory
    return 0;
}