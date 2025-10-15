#include <stdio.h>
void main()
{
    int arr[5];
    int i, j, temp;
    printf("Enter the elements one by one \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < (5 - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array is...\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
}
