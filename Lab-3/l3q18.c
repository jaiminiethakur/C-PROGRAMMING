#include <stdio.h>

int main()
{
    char code;
    int i, boys = 0, girls = 0;

    printf("Enter sex code for 50 students (M/F):\n");
    for (i = 1; i <= 50; i++)
    {
        scanf(" %c", &code);
        if (code == 'M' || code == 'm')
            boys++;
        else if (code == 'F' || code == 'f')
            girls++;
    }

    printf("Number of boys = %d\n", boys);
    printf("Number of girls = %d\n", girls);
}
