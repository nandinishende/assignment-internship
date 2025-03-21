//programming language have some conditional statements that allow us to execute a block of code based on a condition. you are given two numbers a,b compare them and print smaller greater or equal respectively.
#include <stdio.h>  
int main()  
{  
    int a, b;  
    printf("Enter two numbers: ");  
    scanf("%d %d", &a, &b);  
    if (a > b)  
        printf("Greater\n");  
    else if (a < b)  
        printf("Smaller\n");  
    else  
        printf("Equal\n");  
    return 0;  
}