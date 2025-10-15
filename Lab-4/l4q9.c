#include <stdio.h>

int main() {
    int arr[5], n;

    // Input number of elements (max 5)
    do {
        printf("Enter number of elements (1 to 5): ");
        scanf("%d", &n);
    } while(n < 1 || n > 5);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Reverse the array in-place
    for(int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    // Output the reversed array
    printf("\nReversed array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
