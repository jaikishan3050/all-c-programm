// Write a program to check whether the inputted year is a century year or not.

#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year \n");
    scanf("%d" ,& year);
    if (year % 100 == 0)
        printf("%d is a century year \n", year);
    else
        printf("%d is not a century year \n", year);
    return 0;
}