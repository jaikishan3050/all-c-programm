/*Write a program to find greatest of four numbers entered by the user.*/
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the four number: \n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int greatest = a;
    if (b > greatest)
    {
        greatest = b;
    }
    if (c > greatest)
    {
        greatest = c;
    }
    if (d > greatest)
    {
        greatest = d;
    }
printf("The greatest no. is %d",greatest);
    return 0;
}