// Write a program to find the next 5 leap years after a given year.

#include <stdio.h>
int main()
{
    int year, count = 0;
    printf("Enter the year\n");
    scanf("%d", &year);
    printf("Next five years are;\n");
    while (count < 5)
    {
        year++;
       /* if (year % 4 == 0 &&year % 100 !=  0)
            printf("%d is a leap year\n", year);

        else
            printf("%d is  not a leap yaer\n", year);*/
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                printf("%d\n", year);
        count++;
            }
    }
    return 0;
}