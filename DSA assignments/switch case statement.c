//in a menu driven program, the user is given a choice of options to select from. based on the user's choice, a specific block of code is executed. this is typically done using a switch statement. the switch statement evaluates an expression and executes the corresponding case block based on the value of the expression. choice1 is to find area of circle having radius r.choce2 is to fibnd te area of rectangle having dimension i and b 
#include <stdio.h>
#include <math.h>
#define PI 3.14 
int main() {
    int choice;
    float radius, area_circle, length, breadth, area_rectangle;

    printf("Menu:\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area_circle = PI * radius * radius;
            printf("Area of Circle: %.2f\n", area_circle);
            break;
        case 2:
            printf("Enter the length and breadth of the rectangle: ");
            scanf("%f %f", &length, &breadth);
            area_rectangle = length * breadth;
            printf("Area of Rectangle: %.2f\n", area_rectangle);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}