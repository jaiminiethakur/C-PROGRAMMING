#include <stdio.h>

int main() {
    int src[5], dest[10];

    // Initialize destination array with 0s
    for(int i = 0; i < 10; i++) {
        dest[i] = 0;
    }

    // Input elements in source array
    printf("Enter 5 elements for the source array:\n");
    for(int i = 0; i < 5; i++) {
        printf("src[%d]: ", i);
        scanf("%d", &src[i]);
    }

    // Copy with skipping one position
    for(int i = 0; i < 5; i++) {
        dest[i * 2] = src[i];  // Copy to even indices (0, 2, 4, 6, 8)
    }

    // Print destination array
    printf("\nDestination array (after copying with skip):\n");
    for(int i = 0; i < 10; i++) {
        printf("dest[%d] = %d\n", i, dest[i]);
    }

    return 0;
}
