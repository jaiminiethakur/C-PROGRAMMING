#include <stdio.h>

int main() {
    int arr[20]; // Support for up to 20 elements
    int n, num, pos;

    // Input array size
    printf("Enter number of elements (max 19): ");
    scanf("%d", &n);

    if(n < 1 || n > 19) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    // Input elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Input number and position
    printf("\nEnter the number to insert: ");
    scanf("%d", &num);
    printf("Enter the position (0 to %d): ", n);
    scanf("%d", &pos);

    // Validate position
    if(pos < 0 || pos > n) {
        printf("Invalid position.\n");
        return 1;
    }

    // Shift elements to the right to make space
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new number
    arr[pos] = num;
    n++; // Increase array size

    // Print updated array
    printf("\nArray after insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
