// Write a program to determine whether a student has received a grade A, B, C, D, or F based on their mark
#include <stdio.h>
int main()
{
    int  per;
    printf("Enter the percentage:\n");
    scanf("%d", &per);
    
    if (per >= 90 && per <= 100)
    {
        printf("Grade is A\n");
    }
    else if (per >= 80 && per <= 90)
    {
        printf("Grade is B \n");
    }
    else if (per >= 70 && per <= 80)
    {
        printf("Grade is c \n");
    }
    else if (per >= 60 && per <= 70)
    {
        printf("Grade is D \n");
    }
    else
        printf("You are fail \n");
    return 0;
}