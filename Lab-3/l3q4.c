#include <stdio.h>

int main ()
{
    int n,i=1;

    printf("Please enter the value");
    scanf("%d",&n);

    do
    {
        printf("%d",i);
        i++;
    }
    while
        (i<=n);
}
