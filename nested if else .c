/*Write a C program that takes three integer inputs from the user.
If the sum of any two numbers is greater than the third number, print "Triangle is valid."
If the sum of any two numbers is equal to the third number, print "Degenerate triangle."
Otherwise, print "Triangle is not valid."
*/
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three sides of triangle \n");
    scanf("%d%d%d", &a, &b, &c);
    if ((a + b > c) && (b + c > a) && (c + a > b))
    {
        printf("Triangle is valid \n");

        if ((a + b == c) || (b + c == a) || (c + a == b))
        {
            printf("Degenrate triangle\n");
        }
    }
    else
    {
        printf("Triangle is not valid\n");
    }
    return 0;
}