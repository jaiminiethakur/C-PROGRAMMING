#include <stdio.h>

int main() {
    int m, n, p;

    // Input matrix sizes
    printf("Enter number of rows of Matrix A: ");
    scanf("%d", &m);

    printf("Enter number of columns of Matrix A / rows of Matrix B: ");
    scanf("%d", &n);

    printf("Enter number of columns of Matrix B: ");
    scanf("%d", &p);

    int A[m][n], B[n][p], C[m][p];

    // Input Matrix A
    printf("\nEnter elements of Matrix A (%dx%d):\n", m, n);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Input Matrix B
    printf("\nEnter elements of Matrix B (%dx%d):\n", n, p);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize Matrix C with zeros
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

    // Multiply A and B and store in C
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            for(int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print Result
    printf("\nResultant Matrix C (A x B):\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
