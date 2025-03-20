// Write a program to find whether a number is even or odd using the ternary operator.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number \n");
    scanf("%d", &num);
    /*if (num % 2 == 0)
        printf("%d is a even number \n", num);
    else
        printf("%d is a odd number \n", num);*/
    (num % 2 == 0) ? printf(" %d is a even \n",num) : printf("%d is a odd \n",num);
    return 0;

}