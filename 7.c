#include <stdio.h>

int main()
{
    int n;

    for (int i = 0; i < 5; i++)
    {

        for (int k = 0; k < 5 - i - 1; k++)
        {
            printf("  ");
        }

        n = 10 - i;

        for (int j = n; j <= 10; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
