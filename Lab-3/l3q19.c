#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        (i % 5 == 0) ? printf("%d ", i) : 0;
    }
}
