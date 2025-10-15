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

    // Delete last element by reducing size
    n--;

    // Print updated array
    printf("\nArray after deleting last element:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
