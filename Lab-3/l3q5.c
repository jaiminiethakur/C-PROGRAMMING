#include<stdio.h>
void main()

{
    int n,i;
    printf("Please tell the value of n");
    scanf("%d",&n);

    for (i=1;i<=n; i++)
    {
        printf("%d, ",(2*i-1));
    }
}
