/*#include<stdio.h>
int main(){
 int maths,english,physics,chemistry,hindi,total,per;

 printf("Enter the marks ");
 scanf("%d %d %d %d %d ",&maths,&english,&physics,&chemistry,&hindi);
 total = maths+english+physics+chemistry+hindi;
 printf("Total marks obtained %d",total);
 
 return 0;*/



#include <stdio.h>

int main() {
    float part, total, percentage,cgpa;
    
    // Ask for part and total values
    printf("Enter the obtained marks: ");
    scanf("%f", &part);
    
    printf("Enter the total marks: ");
    scanf("%f", &total);
    
    // Calculate percentage
    if (total != 0) {
        percentage = (part / total) * 100;

        // Output the percentage
        printf("The percentage is: %.2f%%\n", percentage);
        cgpa=percentage/9.5;
        printf("CGPA is %.2f\n",cgpa);
        if (cgpa >10)
         printf("CGPA is 10\n");

        
        // Determine the grade based on percentage
        if (percentage >= 90) {
            printf("Grade: A\n");
        } else if (percentage >= 80) {
            printf("Grade: B\n");
        } else if (percentage >= 70) {
            printf("Grade: C\n");
        } else if (percentage >= 60) {
            printf("Grade: D\n");
        } else {
            printf("Grade: F\n");
        }
    } else {
        printf("Total cannot be zero.\n");
    }

    return 0;
}
