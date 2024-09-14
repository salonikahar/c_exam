#include <stdio.h>

void e(int arr[], int size)
{
    printf("Odd elements in the array: ");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main()
{

    int arr[5];
    printf("Enter a element of array\n");
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d] : ", 1 + i);
        scanf("%d", &arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);

    e(arr, size);

    return 0;
}
