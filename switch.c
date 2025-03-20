#include <stdio.h>
int main()
{
    int a;

    printf("Enter the months number:  ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Janaury");
        break;

    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("Sepember");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    default:
        printf("You entered a ivalid months number");
    }
    return 0;
}