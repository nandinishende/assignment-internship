//you are given an integer n, print codingninjas n times without using loops
#include <stdio.h>
void print_coding_ninjas(int n) {
    if (n <= 0) {
        return; // Base case: if n is 0 or negative, do nothing
    }
    printf("codingninjas\n");
    print_coding_ninjas(n - 1); // Recursive call with n decremented by 1
}
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    print_coding_ninjas(n); // Call the recursive function
    return 0;
}