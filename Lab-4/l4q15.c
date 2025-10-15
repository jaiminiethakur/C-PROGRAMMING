#include <stdio.h>

int main() {
    int arr[20];
    int n;

    // Input number of elements
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

    // Delete first element by shifting left
    for(int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    n--; // Reduce size by 1

    // Print updated array
    printf("\nArray after deleting first element:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
