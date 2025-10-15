#include <stdio.h>
void main()
{
    int n, i,s=0;
    printf("Please tell the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        s=s+i;
    }
    printf("Sum of first %d natural numbers = %d", n, s);

}
