/*Write a program to find whether a year entered by the user is a leap year or not.
Take year as an input from the user.

#include <stdio.h>
int main()
{
    int y;
    printf("Enter the year");
    scanf("%d", &y);
    if (y % 4 == 0)
        printf("%d is a leap year", y);
    else
        printf("%d is not a leap year", y);

    return 0;
}*/
#include <stdio.h>
int main()
{
    int y;
    printf("Enter the year");
    scanf("%d", &y);
    (y % 4 == 0) ? printf("%d is leap year \n", y) : printf("%d is not a leap year \n", y);
    return 0;
}