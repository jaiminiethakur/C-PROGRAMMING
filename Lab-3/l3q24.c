#include <stdio.h>

int main()
{
    int num, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;

    while (temp != 0)
    {
        digit = temp % 10;
        if (num < 0)
            rev = rev * 10 - digit;
        else
            rev = rev * 10 + digit;

        temp /= 10;
    }

    printf("Reversed number = %d\n", rev);
}
