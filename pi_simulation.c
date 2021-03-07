#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int n, kolo = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        double x = rand() / (double)RAND_MAX;
        double y = rand() / (double)RAND_MAX;

        if (x * x + y * y <= 1)
        {
            kolo++;
        }
    }
    printf("pi = %lf\n", 4.0 * kolo / n);
    return 0;
}