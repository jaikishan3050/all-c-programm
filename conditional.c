#include <stdio.h>
int main()
{
    int age = 15;
    if (age > 10)
    {
        printf("We are inside if\n");
        printf("Your age is greater than 10\n");
    }
    if (age % 5 == 0)
    {
        printf("We are inside again if\n");
        printf("Your age is divisible by 5\n");
    }
    int age1 = 5;
    if (age1 < 10)
    {
        printf("We are not inside if\n");
        printf("Your age is less than 10");
    }
    return 0;
}