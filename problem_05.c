/* Write a program to determine whether a character entered by the user is
lowercase or not. */
#include <stdio.h>
int main()
{
    char ch;

    printf("enter the character: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
        printf("%c is a lowercase", ch);
    else
        printf("%c is not a lowercase", ch);
    return 0;
}