#include <stdio.h>

int main() {
    int arr[20];
    int n, pos;

    // Input array size
    printf("Enter number of elements (max 20): ");
    scanf("%d", &n);

    if(n < 1 || n > 20) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Input position to delete
    printf("\nEnter position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    if(pos < 0 || pos >= n) {
        printf("Invalid position.\n");
        return 1;
    }

    // Delete element at position by shifting left
    for(int i = pos + 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    n--;  // Reduce size by 1

    // Print updated array
    printf("\nArray after deletion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
