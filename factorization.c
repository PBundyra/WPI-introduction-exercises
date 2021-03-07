#include <stdio.h>

int main(void)
{
    int n;
    printf("Wpisz liczbę którą chcesz rozłożyć: ");
    scanf("%d", &n);
    int dzielnik = 2;
    printf("%d = ", n);
    while (n != dzielnik)
    {
        if (n % dzielnik == 0)
        {
            printf("%d * ", dzielnik);
            n /= dzielnik;
        }
        else
        {
            dzielnik++;
        }
    }
    printf("%d\n", dzielnik);
    return 0;
}