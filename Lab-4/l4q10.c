#include <stdio.h>

int main() {
    int arr[10], freq[10];
    int i, j;

    // Input 10 elements
    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        freq[i] = -1;  // Initialize frequency array
    }

    // Count frequency
    for(i = 0; i < 10; i++) {
        int count = 1;
        if(freq[i] == -1) {
            for(j = i + 1; j < 10; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0;  // Mark as counted
                }
            }
            freq[i] = count;
        }
    }

    // Print frequencies
    printf("\nFrequency of each number:\n");
    for(i = 0; i < 10; i++) {
        if(freq[i] != 0) {
            printf("%d appears %d time(s)\n", arr[i], freq[i]);
        }
    }

    return 0;
}
