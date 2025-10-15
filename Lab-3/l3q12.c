#include <stdio.h>

int main()
{
    char name[50];
    int n, i;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter number of times: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%s\n", name);
    }
}
