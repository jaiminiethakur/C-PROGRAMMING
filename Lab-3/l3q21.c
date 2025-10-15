#include <stdio.h>

int main()
{
    int num, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits: ");
    while (num > 0)
    {
        digit = num % 10;
        printf("%d ", digit);
        num /= 10;
    }
}
