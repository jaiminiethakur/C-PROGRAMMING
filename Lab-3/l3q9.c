#include <stdio.h>
void main()
{
    int n, i,s=0;
    printf("Please tell the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        s=s + (2*i);
    }
    printf("Sum of first %d even numbers = %d", n, s);

}
