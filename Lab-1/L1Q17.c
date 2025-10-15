include<stdio.h>

int main()
{
    int side;
    printf("Enter side length: ");
    scanf("%d", &side);
    printf("Area: %d, Perimeter: %d\n", side * side, 4 * side);
}
