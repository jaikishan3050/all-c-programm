// Write a program to check if three sides entered by the user can form a valid triangle or not.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the sides of triangle \n");
    scanf("%d%d%d", &a, &b, &c);
    if ((a + b >= c) && (a + c > b) && (b + c > a))

        printf("triangle can be formed \n");
    else
        printf("triangle cannot be formed\n");
    return 0;
}