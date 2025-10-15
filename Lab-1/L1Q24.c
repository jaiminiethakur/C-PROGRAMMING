include<stdio.h>

int main()
{
    int x, y, temp;
    printf("Enter two values: ");
    scanf("%d %d", &x, &y);
    temp = x;
    x = y;
    y = temp;
    printf("Swapped Values: %d %d\n", x, y);
}
