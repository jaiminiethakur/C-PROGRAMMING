#include <stdio.h>

int main() {
    int arr[10], result[10];
    int n, direction;

    // Input array elements
    printf("Enter 10 elements of the array:\n");
    for(int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Get number of positions to shift
    printf("\nEnter number of positions to shift (0-10): ");
    scanf("%d", &n);

    // Get direction: 1 for left, 2 for right
    printf("Enter direction (1 for Left, 2 for Right): ");
    scanf("%d", &direction);

    // Initialize result array with zeros
    for(int i = 0; i < 10; i++) {
        result[i] = 0;
    }

    // Perform shifting
    if(direction == 1) {
        // Left shift
        for(int i = 0; i < 10 - n; i++) {
            result[i] = arr[i + n];
        }
    } else if(direction == 2) {
        // Right shift
        for(int i = n; i < 10; i++) {
            result[i] = arr[i - n];
        }
    } else {
        printf("Invalid direction.\n");
        return 1;
    }

    // Print the result
    printf("\nArray after shifting:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
