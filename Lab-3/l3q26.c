#include <stdio.h>

int main()
{
    int num, sum = 0, digit, original;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Not an Armstrong number\n");
    else
    {
        original = num;
        while (num != 0)
        {
            digit = num % 10;
            sum += digit * digit * digit;
            num /= 10;
        }

        (sum == original) ? printf("Armstrong number\n") : printf("Not an Armstrong number\n");
    }
}
