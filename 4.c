
#include <stdio.h>

int main()
{
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] : ", 1 + i);
        scanf("%d", &arr[i]);
    }

    int *ptr = &arr[0];

    printf("Even elements in the array are: ");

    for (int i = 0; i < size; i++)
    {
        if (*(ptr + i) % 2 == 0)
        {
            printf("%d ", *(ptr + i));
        }
    }
    printf("\n");

    return 0;
}
