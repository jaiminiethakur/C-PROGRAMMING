#include <stdio.h>

int main()
{
    int n, i;
    int a = 1, b = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n >= 1)
        printf("%d ", a);
    if (n >= 2)
        printf("%d ", b);

    for (i = 3; i <= n; i++)
    {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
}
