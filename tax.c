/*Write a program to calculate the net salary after deducting tax and provident fund from the basic salary.
No tax if salary ≤ ₹2.5L
5% tax for ₹2.5L to ₹5L
20% tax for ₹5L to ₹10L
30% tax for salary > ₹10L*/
#include <stdio.h>
int main()
{
    float basic_salary, tax = 0, pf, net_salary;
    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);
    if (basic_salary >= 1000000)
    {
        tax = 0.30 * basic_salary;
    }
    else if (basic_salary >= 500000)
    {
        tax = 0.20 * basic_salary;
    }
    else if (basic_salary >= 250000)
    {
        tax = 0.05 * basic_salary;
    }
    else
    {
        tax = 0;
    }
    pf = 0.12 * basic_salary;
    net_salary = basic_salary - tax - pf;
    printf("\nBasic Salary: ₹%.2f\n", basic_salary);
    printf("Tax Deducted: ₹%.2f\n", tax);
    printf("PF Deducted: ₹%.2f\n", pf);
    printf("Net Salary: ₹%.2f\n", net_salary);

    return 0;
}