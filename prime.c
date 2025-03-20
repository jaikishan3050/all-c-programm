#include <stdio.h>

int main()
{
    int num, i, isPrime = 1; // Assume the number is prime

    printf("Enter the number: \n");
    scanf("%d", &num);

    if (num <= 1) // Numbers less than or equal to 1 are not prime
        isPrime = 0;
    else
    {
        for (i = 2; i * i <= num; i++) // Check divisibility from 2 to √num
        {
            if (num % i == 0)
            {
                isPrime = 0; // If divisible, it's not a prime number
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number \n", num);
    else
        printf("%d is not a prime number \n", num);

    return 0;
}
