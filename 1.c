#include <stdio.h>
int main()
{

    int a, b, c, d, e;
    printf("Enter a marks of each subject out of 100 :\n\n");

    printf("Enter a marks of Account : ");
    scanf("%d", &a);
    if (0 > a || a > 100)
    {
        printf("Invalid marks of Account\n");
    }
    else
    {
        printf("Enter a marks of Statics : ");
        scanf("%d", &b);
        if (0 > b || b > 100)
        {
            printf("Invalid marks of Account\n");
        }
        else
        {
            printf("Enter a marks of English : ");
            scanf("%d", &c);
            if (0 > c || c > 100)
            {
                printf("Invalid marks of Account\n");
            }
            else
            {
                printf("Enter a marks of Economic : ");
                scanf("%d", &d);
                if (0 > d || d > 100)
                {
                    printf("Invalid marks of Account\n");
                }
                else
                {
                    printf("Enter a marks of BA : ");
                    scanf("%d", &e);
                    if (0 > e || e > 100)
                    {
                        printf("Invalid marks of Account\n");
                    }
                    else
                    {
                        float total = a + b + c + d + e;

                        float avg = total / 5;

                        printf("\navrage marks : %.2f\n\n", avg);

                        if (avg > 90)
                        {
                            printf("A grade !");
                        }
                        else if (avg > 80)
                        {
                            printf("B grade !");
                        }
                        else if (avg > 65)
                        {
                            printf("C grade !");
                        }
                        else if (avg > 50)
                        {
                            printf("d grade !");
                        }
                        else if (avg > 33)
                        {
                            printf("e grade !");
                        }
                        else
                        {
                            printf("You are Failed !");
                        }
                    }
                }
            }
        }
    }

    // float total = a + b + c + d + e;

    // float avg = total / 5;

    // printf("\navrage marks : %.2f\n\n", avg);

    // if (avg > 90)
    // {
    //     printf("A grade !");
    // }
    // else if (avg > 80)
    // {
    //     printf("B grade !");
    // }
    // else if (avg > 65)
    // {
    //     printf("C grade !");
    // }
    // else if (avg > 50)
    // {
    //     printf("d grade !");
    // }
    // else if (avg > 33)
    // {
    //     printf("e grade !");
    // }
    // else
    // {
    //     printf("You are Failed !");
    // }

    return 0;
}