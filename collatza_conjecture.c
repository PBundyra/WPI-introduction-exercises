#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

void results(bool wyjscie_poza_zakres, int indeks, int licznik_max)
{
    if (wyjscie_poza_zakres)
    {
        printf("%d?\n", indeks);
    }
    else
    {
        printf("%d %d\n", indeks, licznik_max);
    }
}

void compare(int *licznik_max, int licznik, int *indeks, int n)
{
    if (licznik > *licznik_max)
    {
        *licznik_max = licznik;
        *indeks = n;
    }
}

int main(void)
{
    int a, b, indeks, licznik = 0, licznik_max = 0;
    scanf("%d %d", &a, &b);
    bool wyjscie_poza_zakres = false;
    for (int n = a; n <= b; n++)
    {
        int j = n;
        while (!wyjscie_poza_zakres && j != 1)
        {
            if (j % 2 == 0)
            {
                j /= 2;
            }
            else //(n % 2 == 1)
            {
                if (j <= (INT_MAX - 1) / 3) //warunek 3n + 1 <= INT_MAX
                {
                    j = 3 * j + 1;
                }
                else //jeśli 3n + 1 > INT_MAX
                {
                    wyjscie_poza_zakres = true;
                    indeks = n;
                }
            }
            licznik++;
        }
        compare(&licznik_max, licznik, &indeks, n);
        licznik = 0;
    }
    results(wyjscie_poza_zakres, indeks, licznik_max);
    return 0;
}