#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isupper(ch)) {
        
        printf("1\n");
    } else if (islower(ch)) {
        printf("0\n");
    } else {
        printf("-1\n");
    }

    return 0;
}