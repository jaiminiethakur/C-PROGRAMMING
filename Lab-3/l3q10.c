#include <stdio.h>
void main()
{
    int n, i,s=1;
    printf("Please tell the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        s=s * i;
    }
    printf("Fctorial of %d = %d", n, s);

}
