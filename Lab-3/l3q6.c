#include<stdio.h>
void main()

{
    int n,i=1;
    printf("Please tell the value of n");
    scanf("%d",&n);

    while(i<=n)
    {
        printf("%d, ",(2*i));
        i++;
    }
}
