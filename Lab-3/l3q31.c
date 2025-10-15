#include <stdio.h>

int main()
{
    int num, i, isPrime, sum = 0;

    for (num = 2; num <= 500; num++)
    {
        isPrime = 1;

        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            sum += num;
    }

    printf("Sum of prime numbers between 1 and 500 = %d\n", sum);
}
