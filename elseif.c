#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age ");
    scanf("%d", &age);

    if (age > 60)
    {
        printf("You can drive and You are a senior citizen");
    }
    else if (age >= 40)
    {
        printf("You can drive and You are elder");
    }
    else if (age > 18)
    {
        printf("You can drive ");
    }
    else
        printf("You can not drive");
    return 0;
}