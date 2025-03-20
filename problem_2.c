/*Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user*/

#include <stdio.h>
int main()
{
    int maths, chemistry, physics;
    float per, total;
    printf("Enter the marks of MATHS,CHEMISTRY,PHYSCS\n");
    scanf("%d%d%d", &maths, &chemistry, &physics);
    total = maths + chemistry + physics;
    printf("Total number obtained is %f\n", total);
    per = (total / 300) * 100;
    printf("The percantage is %.2f%%\n", per);
    if (maths < 33 || chemistry < 33 || physics < 33)
    {
        printf("You are failed in individual subject");
    }
    else if (per < 40)
    {
        printf("You are due to less percentage");
    }
    else
    {
        printf("You are passed");
    }
    return 0;
}