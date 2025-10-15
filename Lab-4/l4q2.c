#include <stdio.h>

int main() {
    int numbers[10];
    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++)
    {
        printf("Value %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("\nSelected values:\n");
    printf("4th value: %d\n", numbers[3]);
    printf("7th value: %d\n", numbers[6]);
    printf("9th value: %d\n", numbers[8]);
}
