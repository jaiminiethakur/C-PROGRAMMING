#include <stdio.h>

int main()
{
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
            sum += i;
    }

    (sum == num) ? printf("Perfect number\n") : printf("Not a perfect number\n");
}
