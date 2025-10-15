#include <stdio.h>

int main()
{
    char name[50];
    int i;

    printf("Naam batao apna: ");
    scanf("%s", name);

    for (i = 1; i <= 5; i++) {
        printf("Mera naam %s hai\n", name);
    }

   }
