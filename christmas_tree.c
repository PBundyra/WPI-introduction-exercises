#include <stdio.h>

int main(void)
{

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int i = 0; i < n - 2; i++)
        {
            printf(" ");
        }

        for (int i = 0; i < 3; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}