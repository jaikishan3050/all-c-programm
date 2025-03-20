/*Write a program to find grade of a student given his marks based on below
90-100=>>A
90-80=>>B
80-70=>>C
70-60=>>D
60-50=>>E
<50 ==>>F
*/
#include <stdio.h>
int main()
{
    float total, marks, per, cgpa;
    // float per;
    printf("Enter obtain marks: ");
    scanf("%f", &marks);
    printf("Enter total marks: ");
    scanf("%f", &total);
    if (total != 0)
    {
        per = (marks / total) * 100;
        printf("The percentage is %.2f%% \n", per);
        cgpa = per / 9.5;
        if (cgpa>10){
        printf("The CGPA is %.2f\n", cgpa);
        
        }
        if (per >= 90)
        {
            printf("Grade is A");
        }
        else if (per >= 80)
        {
            printf("Grade is B");
        }
        else if (per >= 70)
        {
            printf("Grade is c");
        }
        else if (per >= 60)
        {
            printf("Grade is D");
        }
        else if (per >= 50)
        {
            printf("Grade is E");
        }
        else{
    
            printf("Grade is F");
        }
    }

    else
    {
        printf("Total cannot be zero.\n");
    }
    return 0;
}