#include <stdio.h>
int main()
{
    // int a = 4;
    // int b = 5;
    // int c = a + b;
    // printf("The value of a is %d and value of b is %d and sum is %d",a,b,c);
    int a, b;
    printf("Enter the value of a  ");
    scanf("%d", &a);

    printf("Enter the value of b  ");
    scanf("%d", &b);
    int c = a + b;

    printf("sum is %d", c);

    return 0;
}