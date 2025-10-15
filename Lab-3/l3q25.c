#include <stdio.h>

int main()
{
    int num, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Not Palindrome\n");
    else
    {
        int original = num;
        while (num != 0)
        {
            digit = num % 10;
            rev = rev * 10 + digit;
            num /= 10;
        }

        (rev == original) ? printf("Palindrome\n") : printf("Not Palindrome\n");
    }
}
