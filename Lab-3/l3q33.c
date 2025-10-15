#include <stdio.h>

int main()
{
    int num, square, temp = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;

    int tempNum = num;
    while (tempNum != 0)
    {
        temp *= 10;
        tempNum /= 10;
    }

    (square % temp == num) ? printf("Automorphic number\n") : printf("Not an Automorphic number\n");
}
