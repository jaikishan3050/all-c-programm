// Write a program to calculate the area of a circle, rectangle, or triangle based on the user's choice using a switch-case statement.

#include <stdio.h>
int main()
{
    int choice;
    float radius, length, breadth, base, height, area;
    printf("Choose the shape to find area \n");
    printf("1.Circle\n");
    printf("2.Rectangle\n");
    printf("3.Traingle\n");
    printf("Enter your choice(1-3)\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the radius of circle\n");
        scanf("%f", &radius);
        area = 3.1416 * radius * radius;
        printf("Area of circle is %.2f\n", area);
        break;
    case 2:
        printf("Enter the length and breadth of rectangle\n");
        scanf("%f %f", &length, &breadth);
        area = length * breadth;
        printf("Area of rectangle is %.2f\n", area);
        break;
    case 3:
        printf("Enter the base and height of traingle\n");
        scanf("%f %f", &base, &height);
        area = 0.5 * base * height;
        printf("Area of traingle is %.2f\n", area);
        break;
    default:
        printf("invalid option please choose option 1 and 3.\n");
    }

    return 0;
}