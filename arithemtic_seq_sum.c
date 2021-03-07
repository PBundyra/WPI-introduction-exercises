#include <stdio.h>

int main(void)
{
    double s, k, sum, n;
    scanf("%lf %lf %lf", &s, &k, &n);
    sum = (2 * s + (n - 1) * k) * n / 2;
    printf("%8.6f\n", sum);
    return 0;
}